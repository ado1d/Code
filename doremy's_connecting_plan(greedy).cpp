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

signed main() {
    
    faster_ayman
    testcase {
        int n, c;           cin >> n >> c;
        int k = n * c;
        vi a(n);
        int sum = 0;
        bool flag = 0;
        for (auto & it : a) {
            cin >> it;
            sum += it;
            if (sum >= k) {
                flag = 1;
            }

        }
        if (flag) {
            cout << "Yes\n";
        }else {
            cout << "No\n";
        }


    }
    
    return 0;
}
        