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
    int n;                      cin >> n;
    vp a(n);
    for (auto &it : a)          cin >> it.first >> it.second;
    int left = 0, right = inf;
    int ans = inf;
    while (left <= right) {
        int mid = left + (right - left) / 2;
        bool ok = true;
        int x = 0, y = 0;
        for (auto it : a) {
            int l = it.first, r = it.second;
            x = max(l, x - mid), y = min(r, y + mid);   
            if (x > y) {
                ok = false;
                break;
            }
        }
        if (ok) {
            ans = mid;
            right = mid - 1;
        }else left = mid + 1;
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
        