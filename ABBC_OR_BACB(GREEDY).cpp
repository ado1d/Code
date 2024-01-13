#include<bits/stdc++.h>
using namespace std;

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
    string s;                   cin >> s;
    int n = s.size();
    int a_ase = 0, b_ase = 0;
    bool ok = 0;
    int ses_b = -1;
    rep(i, 0, n) {
        if (s[i] == 'A') a_ase++;
        if (i < n - 2 && s[i] == 'B' && s[i + 1] == 'B') ok = 1; 
        if (s[i] == 'B')    ses_b = i;
        
    }
    if (s.front() == 'B' || s.back() == 'B' || ok) {
        cout << a_ase << '\n';
        return;
    }
    if (ses_b == -1) {
        cout << 0 _ '\n';
        return;
    }
    int mn = a_ase;
    rep(i, 0, n) {
        if (s[i] == 'B')    continue;
        int j = i;
        while (j < n && s[j] == 'A') j++;
        mn = min(mn, j - i);
        i = j;
    }
    cout << a_ase - mn << '\n';
}

signed main() {
    
    faster_ayman
    testcase {
        solve();
    }
    
    return 0;
}
        