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
    char c;                 cin >> c;
    string s;               cin >> s;
    if (c == 'g') {
        cout << "0\n";
        return;
    }
    string notun = s + s;
    vi ans;
    int sz = 2 * n;
    int last = -1;
    for (int i = sz - 1; i >= n; i--) {
        if (notun[i] == 'g') last = i;
    }
    int val = 0;
    for (int i = n - 1; i >= 0; i--) {
        if (s[i] == 'g') last = i;
        if (s[i] == c) ans.pb(last - i);
    }
    cout << *max_element(all(ans)) << '\n';
}

signed main() {
    
    faster_ayman
    testcase {
        solve();
    }
    
    return 0;
}
        