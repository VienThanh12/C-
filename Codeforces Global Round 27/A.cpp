#include <iostream>
#include<algorithm>
using namespace std;
typedef long long ll;
#define For(type, i, a, b) for (type i = (a); i <= (b); ++i)
#define endl '\n'
#define YES cout << "YES\n"
#define NO cout << "NO\n"

ll ans = 0, res = 0, temp = 0;
ll n, m, r, c;


void solve() {
	cin >> n >> m >> r >> c;
    ll x = (r - 1) * m + c;

    ll remain_peo = ((n * m) - x); 
    ll kd = (remain_peo) / m;
    // cout << kd  <<" " << remain_peo << endl;

    kd = max(ll(0), kd);
    
    cout << kd * m + (remain_peo - kd) << endl;
}
 
int main() {
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	int tt; cin >> tt; for (int i = 1; i <= tt; i++) {solve();}
}