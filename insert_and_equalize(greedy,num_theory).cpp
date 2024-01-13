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
    vi a(n);
    for (auto &it : a)  cin >> it;
    sort(all(a));
    int x = 1;
    rep(i, 1, n) {
        if (i == 1) {
            x = a[i] - a[i - 1];
            continue;
        }
        x = __gcd(x, a[i] - a[i - 1]);
    }
    int val = a[n - 1] + x;
    rep(i, 1, n) {
        if (a[i] - x > a[i - 1]) {
            val = a[i] - x;
        }
    }
    a.pb(val);
    // for (auto it : a) {
    //     cout << it << ' ';
    // }
    // cout << x << '\n';
    int ans = 0;
    int target = max(a.back(), a[a.size() - 2]);
    for (auto it : a) {
        ans += (target - it) / x;
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
        