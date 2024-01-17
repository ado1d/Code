#include<bits/stdc++.h>
using namespace std;

//program to find number of divisors, sum of divisors & all divisors of a number
//  O(sqrt(n))
void all_divisors_print(const int &n) {
    int cnt = 0, sum = 0;
    for (int i = 1; i * i <= n; i++) {
        if (!(n % i)) {
            cout << "Divisors : " << i << " & " << n / i << '\n';
            cnt++, sum += i;
            if (n / i != i) {
                cnt++, sum += n / i;
            }
        }
    }
    cout << "Number of divisors : " << cnt << ' ' << "Sum of diviosrs : " << sum << '\n';
}

int main() {
    int n;                  cin >> n;
    all_divisors_print(n);
}