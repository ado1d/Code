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
const int N = 1e5;
bool size_sort(string &a, string &b) {
	return a.size() < b.size();
}

void solve() {
    int n;				cin >> n;
	vector<string> s(n);
	vector<map<int,int>>cnt(6);
	
	for (auto &it : s) {
		cin >> it;
	}
	sort(all(s), size_sort);
	int ans = n;
	for (auto it : s) {
		int sum = 0;
		for (auto i : it) {
			sum += i - '0';
		}
		int len = it.size();
		
		for (int total_len = len + 2 - len % 2; total_len <= 10; total_len += 2) {
			if (total_len > 2*len) break;
			int a = 0, b = 0;
			for (int k = 0; k < len - total_len / 2; k++) {
				a += it[k] - '0';
				b += it[len - k - 1] - '0';
			}
			ans += cnt[total_len - len][sum - 2*a];
			ans += cnt[total_len - len][sum - 2*b];
		}
		cnt[len][sum]++;
	}
	cout << ans << '\n';
}

signed main() {
    faster_ayman
    solve();
    
    return 0;
}
        