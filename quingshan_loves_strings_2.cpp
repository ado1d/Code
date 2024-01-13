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
    int n;          cin >> n;
    string s;       cin >> s;
    string z = "01";
    string x = s;
    vi ans;
    sort(all(x));
    if (n % 2 == 1) {
        cout << "-1\n";
        return;
    }
    if ((x[0] != x[n/2 -1] || x[n/2] != x[n -1]) || x[n/2 - 1] == x[n/2]) {
        cout << "-1\n";
        return;
    }
    int low = 0, high = n - 1;
    while (low <= high) {
        if (s[low] != s[high]) {
            low++, high--;
            continue;
        }
        if (s[low] == '0') {
            s.insert(high + 1, z);
            ans.pb(high + 1);
            high += 2;
        }else {
            s.insert(low, z);
            ans.pb(low);
            high += 2;
        }
    }
    cout << ans.size() << '\n';
    for (auto it: ans) {
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
        