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
    vp a(n);
    int i = 1;
    int x;
    rep(j, 0, n) {
        cin >> x;
        a[j] = {x, i++};
    }           
    sort(all(a));
    // for (auto it : a) {
    //     cout << it.second << ' ';
    // }
    int op = 0;
    rep(i, 0, n-1) {
        int left = a[i].second, right = a[i + 1].second;      //postion
        if (left > right) op++;
    }
    cout << op << '\n';
    

}

signed main() {
    
    faster_ayman
    testcase {
        solve();
    }
    
    return 0;
}
        