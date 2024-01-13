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
    int n, k;                   cin >> n >> k;
    vi a(n);
    int mex_aager = (n * (n + 1)) / 2;
    rep(i, 0, n)                cin >> a[i], mex_aager -= a[i];
    // int new_mex = 0;
    // rep(i, 0, k) {
    //     rep(j, 0, n) {
    //         new_mex = a[j];
    //        a[j] = mex_aager;
    //        mex_aager = new_mex;
    //     }
    // }
    a.pb(mex_aager);
    n++;
    vi ans (n);
    rep(i, 0, n) {
        int pos = (i + k) % n;
        ans[pos] = a[i];
    }
    ans.pop_back();
    for (auto it : ans)           cout << it << ' ';
    cout << '\n';
    
}

signed main() {
    
    faster_ayman
    testcase {
        solve();
    }
    
    return 0;
}
        