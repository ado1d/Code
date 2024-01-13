#include <bits/stdc++.h>
using namespace std;
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>


using namespace __gnu_pbds;

// for ordered_set(policy based data structure)
template <typename T>
using ordered_set = tree<T, null_type, less<T>, rb_tree_tag, tree_order_statistics_node_update>;

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
    int n;              cin >> n;
    vi val;
    int cnt = 0;
    for (int i = 1; i <= n; i++) {
        int x;          cin >> x;
        int curr = 0;
        while (x % 2 == 0) curr++, x /= 2;
        cnt += curr;
        int j = i;
        int posFactor = 0;
        while (j % 2 == 0) posFactor++, j /= 2;
        val.pb(posFactor);
    }
    if (cnt >= n) {
        cout << "0\n";
        return;
    }
    int ans = 0;
    sort(all(val), greater<int>());
    for (auto x : val) {
        cnt += x, ans++;
        if (cnt >= n) {
            cout << ans << '\n';
            return;
        }
    }
    cout << "-1\n";
}

signed main() {
    
    faster_ayman
    testcase {
        solve();
    }
    
    return 0;
}
        