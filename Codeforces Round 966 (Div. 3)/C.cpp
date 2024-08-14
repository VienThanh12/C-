#include <iostream>
#include<algorithm>
#include <map>
using namespace std;

typedef long long ll;
#define For(type, i, a, b) for (type i = (a); i <= (b); ++i)
#define endl '\n'
 

const ll limit = 2e5 + 100;
ll a[limit];

ll seen[200];

ll n, m;
string s;
map<ll,ll> dp;
void solve() {
	
	cin >> n;
	For(ll, i, 1, n)
		cin >> a[i];
	cin >> m;
	while(m--){
		cin >> s;
		bool ok = true;
		if(s.length() != n) {
			ok = false;
		}
		For(ll, i, 0, s.length() - 1){
			seen[int(s[i] - 97)] = -1e18;
			dp[a[i + 1]] = -1e18;
		}
		For(ll, i, 0, s.length() - 1){
			if(seen[int(s[i] - 97)] == -1e18){
				seen[int(s[i] - 97)] = a[i + 1];
			}
			else if(seen[int(s[i] - 97)] != -1e18 && seen[int(s[i] - 97)] != a[i + 1]){
				ok = false;
			}

			if(dp[a[i + 1]] == -1e18){
				dp[a[i + 1]] = int(s[i]);
			}
			else if(dp[a[i + 1]] != -1e18 && dp[a[i + 1]] != int(s[i])){
				ok = false;
			}
		}
		
		if(ok) {
			cout << "YES" << endl;
		}
		else cout <<"NO" << endl;

		
	}
}
 
int main() {
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	int tt; cin >> tt; for (int i = 1; i <= tt; i++) {solve();}
}