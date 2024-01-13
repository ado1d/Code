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
    int n;                  cin >> n;
    vi a(n + 1);
    vector<vi> coPrime(1001), idx(1001);
    rep(i, 1, 1001) {
        rep(j, 1, 1001) if (__gcd(i, j) == 1) coPrime[i].pb(j);
    }
    rep (i, 1, n + 1) {
        int x;              cin >> x;
        idx[x].pb(i);
    }
    int ans = -1;
    rep(i, 1, 1001) {
        for (auto x : coPrime[i]) if (!idx[i].empty() && !idx[x].empty()) ans = max(ans, idx[i].back() + idx[x].back());
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
        