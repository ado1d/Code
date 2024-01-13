#include<iostream>
using namespace std;

void push(int a[], int &size, int &top, int item){
    if (top == size - 1){
        cout << "stack overflow !!! \n";
        return;
    }
    top++;
    a[top] = item;
}

void pop (int a[], int &topp,int &size){
    if (topp == -1){
        cout << "stack underflow !!! \n";
        return;
    }
    topp--;
}
int main() {
    cout << "enter max size of stack : ";
    int maxsize;            cin >> maxsize;
    int stack[maxsize];
    int top = -1;

    int option;
    int ele;
    do {
        cout << "Menu\n";
        cout << "1. Push \n2. Pop \n3. Display \n4. Exit \n";
        cout << "enter option : ";          cin >> option;
        switch(option){
            case 1:
                cout << "enter element to insert : ";       cin >> ele;
                push(stack, maxsize, top, ele);break;
            case 2:
                pop(stack, top, maxsize);break;
            case 3:
                cout << "current stack elements : ";
                for (int i = 0; i <= top; i++){
                    cout << stack[i] << ' ';
                }
                cout << '\n';break;
        }
    }while (option < 4);
}