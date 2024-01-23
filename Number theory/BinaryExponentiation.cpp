#include <bits/stdc++.h>
using namespace std;

const long long M = 1e9 + 7;

long long BinaryExp(long long a, long long b) {
    if (b == 0) return 1;
    long long val = BinaryExp(a, b >> 1);
    if (b & 1) {
        return (a * ((val * val) % M)) % M;
    } else {
        return (val * val) % M;
    }
}

long long BinaryExpIterative(long long a, long long b) {
    long long ans = 1;
    while (b) {
        if (b & 1) {
            ans = (ans * a) % M;
        }
        a = (a * a) % M, b >>= 1;
    }
    return ans;
}

int main() {
    long long a, b;
    cin >> a >> b;

    cout << BinaryExp(a, b) << '\n';

    cout << BinaryExpIterative(a, b) << '\n';
}
