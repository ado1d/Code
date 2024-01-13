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
    string s;           cin >> s;
    // bool ok = 0;
    // rep (i, 0, n - 3) {
    //     string key = s.substr(i, 2);
    //     if (s.find(key, i + 2) != string :: npos) {
    //         ok = 1;
    //         break;
    //     }
    // }
    // if (ok) {
    //     cout << "YES\n";
    // }else {
    //     cout << "NO\n";
    // }

                    //alternative optimized solution
                    
    vector<vector<bool>> ache(26, vector<bool>(26));   //2d
    bool ok = 0;
    rep (i, 0, n - 1) {
        if (ache[s[i] - 'a'][s[i + 1] - 'a']) {
            ok = 1;
            break;
        }
        if (i > 0) ache[s[i - 1] - 'a'][s[i] - 'a'] = 1;
    }
    ok ? cout << "YES\n" : cout << "NO\n";
}

signed main() {
    
    faster_ayman
    testcase {
        solve();
    }
    
    return 0;
}
        