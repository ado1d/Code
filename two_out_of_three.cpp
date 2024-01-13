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
const int N = 1e5;

void solve() {
    int n;          cin >> n;
    vi a(n), b(n, 1);
    for (auto & it : a) cin >> it;
    vi cnt(N);
    bool flag = 0, flag2 = 0;
    rep(i, 0, n) {
        cnt[a[i]]++;
        if (cnt[a[i]] == 2) {
            if (!flag) {
                b[i] = 2;
                flag = 1;
            }else if (!flag2) {
                b[i] = 3;
                flag2 = 1;
            }
        }
    }
    if (!flag2 || !flag) {
        cout << "-1\n";
        return;
    }
    for (auto it:b) {
        cout << it << ' ';
    }
    cout << '\n';

}

signed main() {
    
    faster_ayman
    testcase {
        solve();
    }
    
    return 0;
}
        