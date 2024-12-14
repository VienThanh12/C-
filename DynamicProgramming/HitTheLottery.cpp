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
	cin >> n;
    
    res = 0;
    res += n / 100;
    n -= n / 100 * 100;

    res += n / 20;
    n -= n / 20 * 20;

    res += n / 10;
    n -= n / 10 * 10;

    res += n / 5;
    n -= n / 5 * 5;

    res += n / 1;
    n -= n / 1 * 1;

    cout << res << endl;
}
 
int main() {
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
    solve();
}