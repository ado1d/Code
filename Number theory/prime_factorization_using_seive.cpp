#include<bits/stdc++.h>
using namespace std;

const int N = 1e7 + 10;
vector<bool> isPrime(N, 1);

vector<int> lwPrime(N, 0), hPrime(N, 0);  //initializing lowest prime & highest prime divisors of upto N number


//first finding lowest prime & highest prime divisors of all N number using Sieve
void SieveOfEratosthenes() {
    isPrime[0] = isPrime[1] = false;
    for (int i = 2; i * i <= N; i++) {
        if (isPrime[i]) {
            lwPrime[i] = hPrime[i] = i;
            for (int j = i * i; j <= N; j += i) {
                isPrime[j] = false;
                hPrime[j] = i;
                if (lwPrime[j] == 0) lwPrime[j] = i;
            }
        }
    }
} 

void calPrimefactor(int &n) {
    SieveOfEratosthenes();
    vector<int> prime_factors;
    while(n > 1) {
        int prime_factor = lwPrime[n];  //this can be done using highest prime diviosrs too
        while (n % prime_factor == 0) {
            n /= prime_factor, prime_factors.push_back(prime_factor);
        }
    }

    //print all prime factors
    for (auto x : prime_factors) cout << x << ' ';
}


int main() {
    int n;              cin >> n;   // to find prime factor of n
    calPrimefactor(n);
}