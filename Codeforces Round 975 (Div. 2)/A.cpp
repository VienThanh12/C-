#include <iostream>
#include<algorithm>
using namespace std;

typedef long long ll;
#define For(type, i, a, b) for (type i = (a); i <= (b); ++i)
#define endl '\n'
 
ll n;
const ll limit = 1e3 + 10;
ll a[limit];
ll dp[limit], ans;
ll cnt[limit], res[limit];

void solve() {
	cin >> n;
	For(ll, i, 1, n)
		cin >> a[i];
	dp[0] = 0;
	dp[1] = a[1];
	cnt[0] = 0;
	res[0] = 0;
	ans = 0;
	res[1] = a[1] + 1;
	cnt[1] = 1;
	ans = res[1];
	For(ll, i, 1, n){
		For(ll, j, 0, i - 2){
			dp[i] = max(dp[j], a[i]);
			cnt[i] = cnt[j] + 1;
			res[i] = max(res[i], cnt[i] + dp[i]);
		}
		ans = max(ans, res[i]);
	}
	// For(ll, i, 1, n)
	// 	cout << dp[i] <<" ";
	// cout << endl;
	// For(ll, i, 1, n)
	// 	cout << cnt[i] <<" ";
	// cout << endl;
	// For(ll, i, 1, n)
	// 	cout << res[i] <<" ";
	// cout << endl;
	cout << ans << endl;
	For(ll, i, 0, n + 1){
		dp[i] = 0;
		cnt[i] = 0;
		res[i] = 0;
	}
}
 
int main() {
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	int tt; cin >> tt; for (int i = 1; i <= tt; i++) {solve();}
}