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

signed main() {
    
    faster_ayman
    testcase {
        int n;              cin >> n;
        vi a(n);
        for (auto & it : a) cin >> it;
        int ans = 0, t = 0;
        rep (i, 1, n) {
            int cnt = 0;
            int curr = a[i];
            while (curr < a[i - 1]) {
                curr *= 2;
                cnt++;
            }
            while (curr >= 2 * a[i - 1] && t != 0) {
                a[i - 1] *= 2;
                t--;
            }
            t += cnt;
            ans += t;
        }
        cout << ans << '\n';
        
    }
    
    return 0;
}
        