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
        int n, x;           cin >> n >> x;
        int k = n;
        while (n >= k) {
            string s = to_string(n);
            int sum = 0;
            for (auto it : s) {
                sum += it - '0';
            }
            if (sum % x == 0) {
                cout << n << '\n';
                break;
            }
            n++;
        }
    }
    
    return 0;
}
        