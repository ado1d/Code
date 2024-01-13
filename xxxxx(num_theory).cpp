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
        int n, x;               cin >> n >> x;
        int low, high = 0;
        vi jayga;
        int sum = 0;
        rep(i, 1, n + 1) {
            int z;              cin >> z;
            sum += z;
            if (z % x)  jayga.pb(i);
        }
        // cout << jayga.size() << '\n';
        if (sum % x) {
            cout << n << '\n';
            return;
        }
        if (jayga.empty()) {
            cout << "-1\n";
            return;
        }
        low = jayga[0], high = jayga[jayga.size() - 1];
        cout << max(n - low, high - 1) << '\n';
    }

    signed main() {
        
        faster_ayman
        testcase {
            solve();
        }
        
        return 0;
    }
            