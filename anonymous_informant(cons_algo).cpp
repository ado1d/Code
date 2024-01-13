#include<bits/stdc++.h>
using namespace std;

#define faster_ayman    ios_base::sync_with_stdio(false);cin.tie(NULL);
#define int             long long
#define pb              push_back
#define rep(i, a, b)    for (auto i = a; i < b; i++)
#define all(a)          (a).begin(), (a).end()
#define testcase        int tt;cin >> tt;while (tt--)
#define inf             1e18

typedef vector<int>                         vi;
typedef vector<pair<int,int>>               vp;
typedef vector<double>                      vd;
typedef vector<char>                        vc;
typedef set<int>                            si;
typedef set<char>                           sc;
typedef unordered_set<int>                  usi;

void solve() {
    int n, k;               cin >> n >> k;
    vi b(n);
    rep(i, 0, n)        cin >> b[i];
    int last = n - 1;
    k = min(n, k);
    rep(i, 0, k) {
        if (b[last] > n) {
            cout << "No\n";
            return;
        }
        last = (last - b[last] + n) % n; // updating last elm after right shifting 
    }
    cout << "Yes\n";
}

signed main() {
    
    faster_ayman
    testcase {
        solve();
    }
    
    return 0;
}
        