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
    int n, m;               cin >> n >> m;
    string s, t;            cin >> s >> t;
    int x = 0, y = 0, z = 0;
    vi ans(1000);
    for (int i = 0; i < m - n + 1; i++) {
        //vi ans;
        int temp = 0;
        for (int j = 0, k = i; j < n; j++, k++) {
            if (t[k] == s[j]) {
                temp++;
            }
        }
        if (temp > x) {
            x = temp;
            int rem = n - x;
            y = 0;
            for (int j = i, k = 0; k < n; j++, k++) {
                if (t[j] != s[k]) {
                    ans[y] = k + 1;
                    y++;
                }
            }
        }
    }
    if (x == 0) {
        cout << n << '\n';
        rep(i, 0, n) {
            cout << i + 1 << ' ';
        }
        return 0;
    }
    cout << n - x << '\n';
    rep(i, 0, n - x) {
        cout << ans[i] << ' ';
    }
    
    return 0;
}
        