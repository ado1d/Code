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
    int n, k, d;                        cin >> n >> k >> d;
    vi a(n), b(k);
    for (auto &x : a)                   cin >> x;
    for (auto &x : b)                   cin >> x;
    int ans = 0;
    rep(i, 0, min(d, n  * 2)) {
        int vlo = 0;
        rep(j, 0, n) {
            if (a[j] == j + 1)  vlo++;
        }
        ans = max(ans, vlo + (d - i - 1) / 2);
        int indx = i % k;
        rep(j, 0, b[indx]) a[j]++;
    }
    cout << ans << '\n';
}

signed main() {
    
    faster_ayman
    testcase {
        solve();
    }
    
    return 0;
}
        