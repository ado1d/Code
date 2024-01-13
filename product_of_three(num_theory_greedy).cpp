#include<bits/stdc++.h>
using namespace std;

#define faster_ayman    ios_base::sync_with_stdio(false);cin.tie(NULL);
#define int             long long
#define pb              push_back
#define rep(i, a, b)    for (auto i = a; i < b; i++)
#define all(a)          (a).begin(), (a).end()
#define testcase        int tt;cin >> tt;while (tt--)
#define inf             1e18

typedef vector<int>                         vi;
typedef vector<pair<int,int>>               vp;
typedef vector<double>                      vd;
typedef vector<char>                        vc;
typedef set<int>                            si;
typedef set<char>                           sc;
typedef unordered_set<int>                  usi;

void solve() {
    int n;              cin >> n;
    int a = 0, b = 0, c = 0;
    for (int i = 2; i*i <= n; i++) {
        if (n % i == 0) {
            a = i;
            break;
        }
    }
    if (a == 0) {
        cout << "NO\n";
        return;
    }
    n /= a;
    for (int i = a + 1; i*i <= n; i++) {
        if (n % i == 0) {
            b = i;
            break;
        }
    }
    if (b == 0) {
        cout << "NO\n";
        return;
    }
    c = n / b;
    c > b? cout << "YES\n" << a << ' ' << b << ' ' << c << '\n' : cout << "NO\n";
}

signed main() {
    
    faster_ayman
    testcase {
        solve();
    }
    
    return 0;
}
        