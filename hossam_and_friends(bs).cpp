#include<bits/stdc++.h>
using namespace std;

#define faster_ayman    ios_base::sync_with_stdio(false);cin.tie(NULL);
#define int             long long
#define pb              push_back
#define rep(i, a, b)    for (auto i = a; i < b; i++)
#define all(a)          (a).begin(), (a).end()
#define testcase        int tt;cin >> tt;while (tt--)
#define inf             1e18
#define _               << ' ' <<


typedef vector<int>                         vi;
typedef vector<pair<int,int>>               vp;
typedef vector<double>                      vd;
typedef vector<char>                        vc;
typedef set<int>                            si;
typedef set<char>                           sc;
typedef unordered_set<int>                  usi;

void solve() {
    int n, m;                   cin >> n >> m;
    vi mn(n + 1, n);
    rep(i, 0, m) {
        int x, y;               cin >> x >> y;
        if (x > y) swap(x, y);
        mn[x] = min(mn[x], y - 1);
    }
    for (int i = n - 1; i > 0; i--) mn[i] = min(mn[i], mn[i + 1]);
    int ans = 0;
    rep(i, 1, n) ans += mn[i] - i;
    cout << ans + n << '\n';
}

signed main() {
    
    faster_ayman
    testcase {
        solve();
    }
    
    return 0;
}
        