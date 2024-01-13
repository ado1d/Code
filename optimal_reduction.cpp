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
    int n;                      cin >> n;
    bool inc = 0, dec = 0, dec_then_inc = 0;
    vi a(n);
    rep(i, 0, n) {
        cin >> a[i];
        if (i > 0) {
            if (a[i] > a[i - 1]) {
                if (dec) {
                    dec_then_inc = 1;
                }
                inc = 1;
            }
            if (a[i] < a[i - 1]) dec = 1;
        }
    }
    if (dec_then_inc) {
        cout << "NO\n";
    }else {
        cout << "YES\n";
    }
}


signed main() {
    
    faster_ayman
    testcase {
        solve();
    }
    
    
    return 0;
}
        