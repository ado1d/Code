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
    int n;                      cin >> n;
    vector<vi> a(n);
    for (auto & it : a) {
        rep(i, 0, n) {
            int x;              cin >> x;
            a[i].pb(x);
        }
    }
    vi ans(n, (1 << 30) - 1);
    rep(i, 0, n) {
        rep(j, 0, n) {
            if (i == j) continue;
            ans[j] &= a[i][j];
        }
    }
    rep(i, 0, n) {
        rep(j, 0, n) {
            if (i == j) continue;
            if (a[i][j] != (ans[i] | ans[j])) {
                cout << "NO\n";
                return;
            }
        }
    }
    cout << "YES\n";
    rep(i, 0, n) {
        cout << ans[i] << ' ';
    }
    cout << '\n';
}

signed main() {
    
    faster_ayman
    testcase {
        solve();
    }
    
    return 0;
}
        