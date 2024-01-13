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
    string s;               cin >> s;
    string even, odd;
    for (auto x : s) {
        int val = x - '0';
        if (val & 1) odd.pb(x);
        else even.pb(x);
    }
    string ans;
    int sz = even.size(), sz2 = odd.size();
    int i = 0, j = 0;
    while (i < sz && j < sz2) {
        if (even[i] < odd[j]) {
            ans.pb(even[i]), i++;
        }else {
            ans.pb(odd[j]), j++;
        }
    }
    // cout << ans << ' ' << i << ' ' << j << '\n';
    if (i == sz) {
        ans += odd.substr(j, sz2);
    }else {
        ans += even.substr(i, sz);
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
        