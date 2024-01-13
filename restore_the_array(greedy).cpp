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
    vi a(n - 1);        
    for (auto & it : a) cin >> it;
    vi ans;
    ans.pb(a[0]);
    rep(i, 1, n - 2) {      
        if (a[i + 1] > a[i]) {
            ans.pb(-inf);
        }else {
            ans.pb(a[i]);
        }
    }
    for (auto it : ans) {
        cout << it << ' ';
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
        