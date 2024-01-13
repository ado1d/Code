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

//even odd
void even_odd() {
    cout << "enter : ";
    int n;          cin >> n;
    if (n & 1) {
        cout << "ODD\n";                //in odd number last bit is 1 ex: 5 -> 101(binary)
    }else {
        cout << "even\n";
    }
}
//get ith bit(0 indexing)
void get_ith_bit() {
    cout << "enter number & position :";
    int n, pos;                      cin >> n >> pos;
    cout << bitset<8>(n) << '\n';
    int mask = 1 << pos;             //ex: 1 << 3 = 1000  (get 3th bit of 100110 & 001000) == 0
    if (n & mask) {
        cout << "1\n";
    }else {
        cout << "0\n";
    }
}
//set ith bit(make ith bit 1)
void set_ith_bit() {
    int n, pos;                     cout << "enter num & pos : ";
    cin >> n >> pos;                //ex: 100100; set (3rd)-> 100100 | 001000 == 101100
    int mask = 1 << pos;
    
    int new_n = n | mask;
    cout << "initial : " << n << " = " << bitset<8>(n) << '\n';;
    cout << "New : " << new_n << " = " << bitset<8>(new_n) << '\n';


}


signed main() {
    
    faster_ayman
    // even_odd();
    // get_ith_bit();
    set_ith_bit();
    
    return 0;
}
        