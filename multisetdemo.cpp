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
    multiset<int> m;
    int n;              cin >> n;

    // inserting element in the multiset
    rep(i, 0, n) {
        int x;          cin >> x;
        m.insert(x);
    }

    //outputing element of the multiset
    for (auto &it : m) {
        cout << it << ' ';
    }
    cout << '\n';
    // for pair
    multiset<pair<int, int>> low, high;
    rep(i, 0, n) {
        int x, y;           cin >> x >> y;
        low.insert({x, y});
        high.insert({y, x});
        
    }
    cout << '\n';
    for (auto & it : low) {
        cout << '(' << it.first << ' ' << it.second << ')';
    }
    cout << '\n';

    for (auto & it : high) {
        cout << '(' << it.first << ' ' << it.second << ')';
    }
    cout << '\n';
    
    // finding max & min element
    cout << *m.begin() << '\n';     // min element in the (m) multiset
    cout << *m.rbegin() << '\n';       // max element ..........

    // for multiset pair
    cout << low.begin()->first << '\n';     //min first element pair multiset
    cout << low.rbegin()->second << '\n';   //max second element .........
    cout << high.begin()->first << '\n';
    cout << high.rbegin()->first << '\n';

    return 0;
}
        