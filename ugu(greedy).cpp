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
    int n;                  cin >> n;
    string s;               cin >> s;
    int pos = -1;
    rep(i, 0, n - 1) {
        if (s[i] > s[i + 1]) {
            pos = i;
            break;
        }
    }
    // cout << pos << '\n';
    if (pos == - 1) {
        cout << "0\n";
        return;
    }
    int ans = 0;
    rep(i, pos, n - 1) {
        if (s[i + 1] < s[i] || s[i] < s[i + 1]) ans++;
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
        