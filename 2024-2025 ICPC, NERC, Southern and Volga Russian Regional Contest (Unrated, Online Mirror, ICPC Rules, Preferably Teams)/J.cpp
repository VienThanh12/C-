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
char x;
ll y;

void solve() {
	cin >> x >> y;
    if(x == 'P'){
        res += y;
    }
    if(x == 'B'){
        res < y ? cout <<"YES" << endl : cout <<"NO" << endl;
        res = max(ll(0), res - y);
    }
}
 
int main() {
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	int tt; cin >> tt; for (int i = 1; i <= tt; i++) {solve();}
}