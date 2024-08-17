#include <iostream>
#include<algorithm>
using namespace std;
 
typedef long long ll;
#define For(type, i, a, b) for (type i = (a); i <= (b); ++i)
#define endl '\n'
 
ll x, y, u, v;
 
void solve() {
	cin >> x >> y >> u >> v;
	ll res = 0;

	if(x > u || x < u) res++;
	if(y < v || y > v) res++;
 
	if(min(y, v) - max(x, u) > 0){
		res += min(y, v) - max(x, u);
	}
	cout << res << endl;
}
 
int main() {
	ios::sync_with_stdio(false);	
	cin.tie(nullptr);
	int tt; cin >> tt; for (int i = 1; i <= tt; i++) {solve();}
}