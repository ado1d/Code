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
const int mxN = 1e6 + 5;

void solve() {
    int n;
    cin >> n;
    vector<bool>primes(1e6 + 5, 1);
    primes[0] = primes[1] = 0;
    
    for (int i = 2; i*i <= mxN; i++) {
        if (primes[i]) {
            for (int j = i * i; j <= mxN; j += i) {
                primes[j] = 0;
            }
        }
    }

    rep (i, 0, n) {
        int x;
        cin >> x;
        int val = sqrt(x);
        if (val * val != x) {
            cout << "NO\n";
            continue;
        }
        if (primes[val]) {
            cout << "YES\n";
        }else cout << "NO\n";
    }
    

}

signed main() {
    
    faster_ayman
    solve();
    
    return 0;
}
        