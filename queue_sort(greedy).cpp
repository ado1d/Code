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
    int n;          cin >> n;
    vi a(n);
    for (auto & it : a) {
        cin >> it;
    }
    int ans = 0;
    int low = *min_element(all(a));
    int low_pos = -1;
    rep(i, 0, n) {
        if (a[i] == low) {
            low_pos = i;
            break;
        }
    }
    for (int i = low_pos; i < n - 1; i++) {
        if (a[i] > a[i + 1]) {
            cout << "-1\n";
            return;
        }
    }
    cout << low_pos << '\n';
}

signed main() {
    
    faster_ayman
    testcase {
        solve();
    }
    
    return 0;
}
        