#include<bits/stdc++.h>
using namespace std;

const int N = 1e7 + 10;
vector<bool> SieveOfEratosthenes() {
    vector<bool> isPrime(N, 1);
    isPrime[0] = isPrime[1] = false;
    for (int i = 2; i * i <= N; i++) {
        if (isPrime[i]) {
            for (int j = i * i; j <= N; j += i) {
                isPrime[j] = false;
            }
        }
    }
    return isPrime;
} 
// O N(log(logN))

int main() {
    vector<bool> primes = SieveOfEratosthenes();

    //print prime number from 1 to 100
    for (int i = 0; i <= 100; i++) {
        if (primes[i]) cout << i << ' ';
    }
}