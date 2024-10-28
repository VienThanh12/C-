#include <iostream>
#include<algorithm>
using namespace std;
typedef long long ll;
#define For(type, i, a, b) for (type i = (a); i <= (b); ++i)
#define endl '\n'
#define YES cout << "YES\n"
#define NO cout << "NO\n"

ll ans = 0, res = 0, temp = 0;
ll n;

void solve() {
	ll x, y, k;
    cin >> x >> y >> k;

    ll u, v;
    For(ll, i, 0, x){
        For(ll, j, 0, y){
            if((i * i + j * j) >= k * k && i * i - j * j == 0){
                cout << 0 <<' ' << 0 << ' ' << i << ' ' << j << endl;
                cout << 0 <<' ' << j << ' ' << i << ' ' << 0 << endl;
                return;
            }
        }
    }

}
 
int main() {
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	int tt; cin >> tt; for (int i = 1; i <= tt; i++) {solve();}
}