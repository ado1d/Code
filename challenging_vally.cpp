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
    vi a(n);
    for (auto &x : a)       cin >> x;
  
    int dec = 0, inc = 0;
   
    rep (i, 0, n - 1) {
        if (a[i + 1] > a[i]) inc++;
        else if (a[i + 1] < a[i]) {
            dec++;
            if (inc) {
                cout << "NO\n";
                return;
            }
        }
    }
    cout << "YES\n";
}


signed main() {
    
    faster_ayman
    testcase {
        solve();
    }
    
    return 0;
}
        