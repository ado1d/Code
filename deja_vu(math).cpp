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
	int n, q;					cin >> n >> q;
	vi a(n), b(q);
	for (auto &it : a)			cin >> it;
	si cnt;
	for (auto & it : b) {
		cin >> it;
        if (cnt.count(it))      continue;
        cnt.insert(it);
		int val = pow(2, it);
		int cnt = pow(2, it - 1);
		rep(i, 0, n) {
			if (a[i] % val == 0) {
				a[i] = a[i] + cnt;
			}
		}
	}
	for (auto it : a) {
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
        