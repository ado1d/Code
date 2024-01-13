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
    int n;              cin >> n;
    string s;           cin >> s;
    // string c;      c = s;
    // sort(all(c));
    vi hsh(27);
    if (n % 2) {
        cout << "-1\n";
        return;
    }
    rep(i, 0, n) {
        hsh[s[i] - 'a']++;
        if (hsh[s[i] - 'a'] > n / 2) {
            cout << "-1\n";
            return;
        }
    }
    int tot = 0;
    vi cnt(27);
    rep(i, 0, n/2) {
        if (s[i] == s[n - i - 1]) {
            cnt[s[i] - 'a'] ++;
            tot++;
        }
    }
    sort(all(cnt));
    cout << max(cnt[27 - 1], (int)ceil(tot / 2.0)) << '\n';
    
}

signed main() {
    
    faster_ayman
    testcase {
        solve();
    }
    
    return 0;
}
        