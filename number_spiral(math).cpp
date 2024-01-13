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
        int r, c;                   cin >> r >> c;
        if (r >= c) {
            int val = 0;
            if (r & 1) {
                val = r * r - ((r - 1) * 2 + 1) + 1;
                cout << val + c - 1 << '\n';
            }else {
                val = r * r;
                cout << val - c + 1 << '\n';
            }
        }else {
            int val = 0;
            if (c & 1) {
                val = c * c;
                cout << val - r + 1 << '\n';
            }else {
                val = c * c - ((c - 1) * 2 + 1) + 1;
                cout << val + r - 1 << '\n';
            }
        }
    }

    signed main() {
        
        faster_ayman
        testcase {
            solve();
        }
        
        return 0;
    }
            