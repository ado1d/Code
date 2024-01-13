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
    int n;              cin >> n;
    vi a(n), cnt(n, 0);
    rep(i, 0, n) {
        cin >> a[i];
        cnt[i] = a[i] - (i + 1);
    }
    sort(all(cnt));
    int ans = 0;
    int curr = 0;
    bool ok = 0;
    rep(i, 1, n) {
        if (cnt[i] == cnt[i - 1]) {
            curr++;
            if (i == n - 1) ok = 1;
            
        }else {
            ans += (curr * (curr + 1)) / 2;
            curr = 0;
        }
    }
    if (ok) {
        cout << ans + (curr * (curr + 1)) / 2 << '\n';
        return;
    }
    cout << ans << '\n';
    // for (auto x : cnt) cout << x << ' ';
    // cout << '\n';

}

signed main() {
    
    faster_ayman
    testcase {
        solve();
    }
    
    return 0;
}
        