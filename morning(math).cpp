#include<bits/stdc++.h>
using namespace std;

#define faster_ayman    ios_base::sync_with_stdio(false);cin.tie(NULL);
#define int             long long
#define pb              push_back
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

signed main() {
    
    faster_ayman
    testcase {
        string s;       cin >> s;
        int j = 1;
        int ans = 0;
        for (auto it :s ) {
            int dig = it - '0';
            if (it == '0') {
                ans += 10 - j;
                j = 10;
            }else {
                ans += abs(dig - j);
                j = dig;
            }
        }
        cout << ans + 4 << '\n';

    }
    
    return 0;
}
        