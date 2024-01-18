#include<bits/stdc++.h>
using namespace std;

bool isPrime(const int &n) {
    if (n == 1) return false;
    for (int i = 2; i * i <= n; i++) {
        if (!(n % i)) return false;
    }
    return true;
}

int main() {
    int n;                  cin >> n;
    isPrime(n) ? cout << "Prime number\n" : cout << "Not prime number\n";
}