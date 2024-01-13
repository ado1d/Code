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
    string s; int n;                    cin >> s >> n;
    string ans;
    bool ok = 0;
    char sol;
    for (auto x : s) {
        if (x - 'a' + 1 < n) ans.pb(x);
        if (x - 'a' + 1 == n) ok = 1, sol = x;
    } 
    if (ans.empty() && ok) {
        cout << sol << '\n';
        return;
    }
    vector<pair<char, int>> tar;
    int sz = ans.size();
    rep(i, 0, sz) {
        tar.pb({ans[i], i});
    }
    sort(all(tar));
    vi pos;
    int val = 0;
    for (auto x: tar) {
         
        val += x.first - 'a' + 1;
        if (val > n) break;
        pos.pb(x.second);
    }
    sort(all(pos));
    int j = 0;
    rep(i, 0, sz) {
        if (i == pos[j]) {
            cout << ans[i];
            j++;
        }
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
        