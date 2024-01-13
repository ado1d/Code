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
    int n, k;               cin >> n >> k;
    string s;               cin >> s;
    map<char, int> cnt;
    for (auto x : s) {
        cnt[x]++;
    }
    int ans = 0;
    for (auto x : cnt) {
        char loww = x.first;
        if (islower(loww)) {
            char upp = toupper(loww);
            int val = min(cnt[loww], cnt[upp]);
            ans += val;
            cnt[loww] -= val, cnt[upp] -= val;
        }
    }
   
    int val = 0;
    for (auto x : cnt) {
        int vlo = min(k, x.second / 2);
        k -= vlo;
        if (k < 0)  break;
        ans += vlo;
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
        