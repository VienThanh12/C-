#include <iostream>
#include<algorithm>
using namespace std;
typedef long long ll;
#define For(type, i, a, b) for (type i = (a); i <= (b); ++i)
#define endl '\n'
#define YES cout << "YES\n"
#define NO cout << "NO\n"

ll res = 0, temp = 0;
ll n, a, b, c;

void solve() {
	cin >> n >> a >> b >> c;
    
	res = 0;
	For(ll, i, 0, 4000){
		For(ll, j, 0, 4000){
			if(i * a + j * b > n){
				break;
			}
			ll ans = 0;
			ll k;
			ans = n - a * i - b * j;
			if(ans % c == 0){
				k = ans / c;
			}
			if(a * i + b * j + c * k == n && min(i, ll(1)) + min(j, ll(1)) + min(k, ll(1)) >= 1){
				res = max(res, i + j + k);
			}
		}
	}
	cout << res << endl;
}
 
int main() {
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	{solve();}
}