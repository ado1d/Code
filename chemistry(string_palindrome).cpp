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
        int n, k;       cin >> n >> k;
        string s;       cin >> s;
        vi cnt(27);
        // creating map
        for (auto it : s) {
            int dig = it - 'a';
            cnt[dig]++;
        }
        int odd = 0, even = 0, single = 0;
        for (int i = 0; i < 27; i++) {
            if(cnt[i] == 0) continue;
            if (cnt[i] % 2 != 0) {
                odd++;
            }else {
                even++;
            }
        }
        int sum = odd - k;
        // cout << sum <<'\n';
        // cout << odd << ' ' << even << '\n';
        sum > 1?cout << "NO\n" : cout << "YES\n";

    }
    
    return 0;
}
        