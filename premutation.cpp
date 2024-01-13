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
    si val;
    int n;                          cin >> n;
    vector<vi> a(n);
    for (auto &x : a) {
        x.resize(n - 1);
        for (auto &z : x)           cin >> z;
    }
    vi ans;
    rep(i, 0, n) val.insert(i + 1);
    rep (i, 0, n - 1) {
        map<int, int> cnt;
        rep (j, 0, n) {
            int x = a[j][i];
            cnt[x]++;
        }
        for (auto x : cnt) {
            if (x.second == (n - i - 1)) ans.pb(x.first), val.erase(x.first);
        }
    }
    ans.pb(*val.begin());
    int sz = ans.size();
    vi vloAns;

    set<int> ache;
    for (int i = sz - 1; i >= 0; i--) {
        if (!ache.count(ans[i])) vloAns.pb(ans[i]), ache.insert(ans[i]);
    }
    reverse(all(vloAns));
    for (auto x : vloAns) cout << x << ' ';
    cout << '\n';
}

signed main() {
    
    faster_ayman
    testcase {
        solve();
    }
    
    return 0;
}
        