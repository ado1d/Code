#include<bits/stdc++.h>
using namespace std;

#define faster_ayman    ios_base::sync_with_stdio(false);cin.tie(NULL);
#define int             long long
#define pb              push_back
#define all(a)          (a).begin(), (a).end()
#define rep(i, a, b)    for (auto i = a; i < b; i++)
#define testcase        int tt;cin >> tt;while (tt--)
#define inf             1e18

typedef vector<int>                         vi;
typedef vector<pair<int,int>>               vp;
typedef vector<double>                      vd;
typedef vector<char>                        vc;
typedef set<int>                            si;
typedef set<char>                           sc;
typedef unordered_set<int>                  usi;

signed main() {
    
    faster_ayman
    testcase {
        int n, m;           cin >> n >> m;
        string s, t;        cin >> s >> t;
        bool flag = 0, flag2 = 0;
        rep(i, 0, n - 1) {
            if (s[i] == s[i + 1]) {
                flag = 1;
            }
            if (t[i] == t[i + 1]) {
                flag2 = 1;
            }
        }
        if (!flag) {
            cout << "YES\n";
            continue;
        }
        if (flag2 == 1 && flag == 1) {
            cout << "NO\n";
            continue;
        }
        bool x = 0;
        if (flag2 == 0 && flag == 1) {
            rep(i, 0, n - 1) {
                if (s[i] == s[i + 1]) {
                    if (s[i] == t[0] || (s[i + 1] == t[m - 1] && s[i] !=t[0]) ) {
                        x = 1;
                    }
                }
            }
        }
        if (x) {
            cout << "NO\n";
        }else {
            cout << "YES\n";
        }
    }
    return 0;
}
        