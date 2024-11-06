#include <iostream>
#include<algorithm>
using namespace std;
typedef long long ll;
#define For(type, i, a, b) for (type i = (a); i <= (b); ++i)
#define endl '\n'
#define YES cout << "YES\n"
#define NO cout << "NO\n"

ll ans = 0, res = 0;
ll n;
ll a, b, c;
void solve() {
	cin >> a >> b >> c;

    if(b % 3 != 0 && b % 3 + c < 3) {
        cout << -1 << endl;
        return;
    }
    ll temp = b % 3 + c;
    ll kd = (temp % 3 != 0) ? 1 : 0;
    cout << a + b / 3 + temp / 3 + kd << endl;
}
 
int main() {
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	int tt; cin >> tt; for (int i = 1; i <= tt; i++) {solve();}
}