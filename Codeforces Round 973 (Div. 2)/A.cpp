#include <iostream>
#include<algorithm>
using namespace std;

typedef long long ll;
#define For(type, i, a, b) for (type i = (a); i <= (b); ++i)
#define endl '\n'

ll n;
ll x, y;

void solve() {
    cin >> n;
    cin >> x >> y;
    ll res = 0;
    if(n % min(x, y) != 0) res = 1;
    res += n / min(x, y);
    cout << res << endl;
}
 
int main() {
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	int tt; cin >> tt; for (int i = 1; i <= tt; i++) {solve();}
}