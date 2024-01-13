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
    int n;                  cin >> n;
    vc s(n);
    vi cnt(26 + 1);
    for (auto &it : s)      cin >> it, cnt[it - 'a']++;
    int high = *max_element(all(cnt));
    if (high > n / 2) {
        int op = n - high;
        int muchbo = op * 2;
        int thakbe = n - muchbo;
        cout << thakbe << '\n';
        return;
    }
    n % 2? cout << "1\n" : cout << "0\n";

}

signed main() {
    
    faster_ayman
    testcase {
        solve();
    }
    
    return 0;
}
        