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
    int n, k;                       cin >> n >> k;
    vi a(n), b(n);
    for (auto &x : a)               cin >> x;
    for (auto &x : b)               cin >> x;
    int sum = 0;
    int l = 0, r = 0;
    int ans = 0;
    for (r = 0; r < n; r++) {
        if (r > 0 && b[r - 1] % b[r]) {
            l = r, sum = 0;
        }
        sum += a[r];
        while (l <= r && sum > k) {
            sum -= a[l], l++;
        }
        ans = max(ans, r - l + 1);
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
        