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
    int q;              cin >> q;
    multiset<int>l , r;
    rep (i, 0, q) {
        int x, y;
        char s;         cin >> s >> x >> y;
        if (s == '+') {
            l.insert(x);
            r.insert(y);
        }else {
            l.erase(l.find(x));
            r.erase(r.find(y));
        }
        if (l.size() <= 1) {
            cout << "NO\n";
            continue;
        }
        int max_left = *l.rbegin();
        int min_right = *r.begin();
        if (max_left > min_right) {
            cout << "YES\n";
        }else {
            cout << "NO\n";
        }
    
    }
    
    return 0;
}
        