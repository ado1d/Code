#include<bits/stdc++.h>
using namespace std;

void prime_factorization(int &n) {
    vector<int>prime_fact;
    for (int i = 2; i * i <= n; i++) {
        while(n % i == 0) {
            prime_fact.push_back(i);
            n /= i;
        }
    }
    if (n > 1) prime_fact.push_back(n);
    for (auto x : prime_fact) cout << x << ' ';
}

int main() {
    int n;                  cin >> n;
    prime_factorization(n);
}