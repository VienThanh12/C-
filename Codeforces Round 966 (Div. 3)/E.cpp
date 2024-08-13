#include <iostream>
#include<algorithm>
using namespace std;

typedef long long ll;
#define For(type, i, a, b) for (type i = (a); i <= (b); ++i)
#define endl '\n'
 
ll n, m, k, w;
const ll limit = 2e5 + 10;

ll a[limit];
ll cnt[limit];
void solve() {
	cin >> n >> m >> k;
	cin >> w;
	For(ll, i, 1, w)
		cin >> a[i];
	sort(a + 1, a + 1 + w);

	ll kd = 0;

	For(ll, i, 1, n)
		For(ll, j, 1, m){
			ll bounder_x = max(i - k + 1, ll(1));
			ll bounder_y = max(j - k + 1, ll(1));
			ll bounder_u = min(i, n - k + 1);
			ll bounder_v = min(j, m - k + 1);
			kd++;
			// cout << bounder_x << " " << bounder_y <<" " << bounder_u <<" " << bounder_v << endl;
			cnt[kd] = (bounder_u - bounder_x + 1) * (bounder_v - bounder_y + 1);
		}

	sort(cnt + 1, cnt + 1 + kd);
	// For(ll, i, 1, kd){
	// 	cout << cnt[i] << " ";
	// }

	ll res = 0;
	for(ll i = w; i >= 1; i --){
		//  cout << a[i] << " " << cnt[kd] << endl;
		res += a[i] * cnt[kd];
		kd --;
	}
	cout << res << endl;
	For(ll, i, 1, n * m){
		cnt[i] = 0;
		a[i] = 0;
	}
}
 
int main() {
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	int tt; cin >> tt; for (int i = 1; i <= tt; i++) {solve();}
}