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
    vi a(n + 1), pfSum(n + 1);
    rep (i, 1, n + 1) {
        cin >> a[i];
        pfSum[i] = pfSum[i - 1] + a[i];
    }
    int low = 1, high = n;
    int ans = 0;
    while (low <= high) {
        int mid = low + (high - low) / 2;
        cout << "? " << mid << ' ';
        
        rep(i, 1, mid + 1)  cout << i << ' ';
        fflush(stdout);
        cout << endl;
        int qs;                 cin >> qs;
        if (qs == pfSum[mid] + 1) {
            ans = mid;
            high = mid - 1;
        }else {
            low = mid + 1;
        }
    }
    cout << "! " << ans << endl;
    fflush(stdout);

}

signed main() {
    
    // faster_ayman
    testcase {
        solve();
    }
    
    return 0;
}
        