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

bool thikase(int &mid, int &c, vi &a)  {
    int cnt  = 0;
    for (auto x : a) {
        cnt += (x + mid) * (x + mid);
        if (cnt > c) break;
    }
    return (cnt <= c);
}

void solve() {
    int n, c;                   cin >> n >> c;
    vi a(n);
    for (auto &x : a)           cin >> x;
    int low = 1, high = 1e9;
    int ans = 1;
    while (low <= high) {
        int mid = (low + high) / 2;
        if (thikase(mid, c, a)) {
            low = mid + 1, ans = mid / 2;
        }else {
            high = mid - 1;
        }
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
        