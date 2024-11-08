#include <iostream>
#include<algorithm>
using namespace std;
typedef long long ll;
#define For(type, i, a, b) for (type i = (a); i <= (b); ++i)
#define endl '\n'
#define YES cout << "YES\n"
#define NO cout << "NO\n"

ll ans = 0, res = 0, temp = 0;
ll m, n;

void solve() {
	cin >> m >> n;
    cout << m * n / 2 << endl;
}
 
int main() {
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	{solve();}
}