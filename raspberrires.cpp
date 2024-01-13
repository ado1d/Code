#include<bits/stdc++.h>
using namespace std;

#define faster_ayman    ios_base::sync_with_stdio(false);cin.tie(NULL);
#define int             long long
#define pb              push_back
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
        int n, k;               cin >> n >> k;
        vi a(n);
        for (auto &it : a)      cin >> it;
        int ans = inf;
        int even = 0;
        for (auto it : a) {
            int x = ceil((float)it/k);
            ans = min(ans, k * x - it);
            if (it % 2 == 0) {
                even++;
            }
        }
        // cout << ans;
        // cout << '\n';
        if (k == 4) {
            int y = max(0ll, 2 - even);
            ans = min(ans, y);
            cout << ans << '\n';
            continue;
        }
        cout << ans << '\n';
    }
    
    return 0;
}
        