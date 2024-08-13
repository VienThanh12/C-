#include <iostream>
#include<algorithm>
using namespace std;

typedef long long ll;
#define For(type, i, a, b) for (type i = (a); i <= (b); ++i)
#define endl '\n'
 
ll n;
const ll limit = 2e5 + 10;

ll a[limit];
string s;
ll cnt[limit], dp[limit];

void solve() {
	cin >> n;

	For(ll, i, 1, n){
		cin >> a[i];
		dp[i] = dp[i - 1] + a[i];
	}
	cin >> s;

	s = '0' + s;
	ll kd = 0;
	for(ll i = n; i >= 1; i--){
		if(s[i] == 'R'){
			kd ++;
			cnt[kd] = i;
		}
	}
	kd = 1;
	ll res = 0;
	For(ll, i, 1, n){
		if(s[i] == 'L'){
			if(i < cnt[kd]){
				res += dp[cnt[kd]] - dp[i - 1]; 
				kd++;
			}
		}
	}
	cout << res << endl;

	For(ll, i, 1, n){
		dp[i] = 0;
		cnt[i] = 0;
 	}
}
 
int main() {
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	int tt; cin >> tt; for (int i = 1; i <= tt; i++) {solve();}
}