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
    int n;                  cin >> n;
    vi a(n + 1);
    vi ans(n + 1);
    si val;
    rep(i, 1, n+1) {
        val.insert(i);
        cin >> a[i];
        // if (a[i] != a[i - 1]) {
        //     ans[i - 1] = a[i - 1];
        // }
        val.erase(a[i]);
    }
    ans[0] = n + 1;
    rep(i, 1, n + 1) {
        if (a[i] != a[i - 1]) {
            ans[i] = a[i - 1];
        }else {
            if (!val.empty()) {
                ans[i] = *val.begin();
                val.erase(val.begin());
            }else {
                ans[i] = ans[i - 1];
            }
        }
    }
    rep(i, 1, n + 1) {
        cout << ans[i] << ' ';
    }
    cout << '\n';

}

signed main() {
    
    faster_ayman
    solve();
    
    return 0;
}
        