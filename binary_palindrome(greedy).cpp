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
    vector<string> a(n);
    for (auto &x: a)    cin >> x;
    int cnt = 0;
    int ans = 0;
    for (auto x : a) {
        int sunno = 0, ek = 0;
        int sz = x.size();
        if (sz & 1) {
            cout << n << '\n';
            return;
        }
        for (auto z : x) {
            if (z == '0')   sunno++;
            else            ek++;
        }
        if (sunno & 1 || ek & 1) {
            cnt++;
            // break;
        }else ans++;
    }
    cout << ans + cnt - cnt % 2 << '\n';
}

signed main() {
    
    faster_ayman
    testcase {
        solve();
    }
    
    return 0;
}
        