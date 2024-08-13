#include <iostream>
#include<algorithm>
using namespace std;

typedef long long ll;
#define For(type, i, a, b) for (type i = (a); i <= (b); ++i)
#define endl '\n'
 
const ll limit = 2e5 + 10;
ll a[limit];
ll n;

ll check[limit];

void solve() {
	cin >> n;
	For(ll, i, 1, n)
		cin >> a[i];
	bool ok = true;
	check[a[1]] = 1;
	For(ll, i, 2, n){
		if(check[a[i] + 1] == 0 && check[a[i] - 1] == 0)
			ok = false;

		check[a[i]] = 1;
	}
	if(ok) {
		cout << "YES" << endl;
	}
	else cout <<"NO" << endl;

	For(ll, i, 1, n)
		check[a[i]] = 0;
}
 
int main() {
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	int tt; cin >> tt; for (int i = 1; i <= tt; i++) {solve();}
}