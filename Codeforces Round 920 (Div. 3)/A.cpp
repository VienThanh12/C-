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
ll x_1, y_1;
ll x_2, y_2;
ll x_3, y_3;
ll x_4, y_4;
void solve() {
	cin >> x_1 >> y_1;
	cin >> x_2 >> y_2;
	cin >> x_3 >> y_3;
	cin >> x_4 >> y_4;

	ll min_x = 1e18, max_x = -1e18, min_y = 1e18, max_y = -1e18;
	min_x = min(min_x, x_1);
	min_x = min(min_x, x_2);
	min_x = min(min_x, x_3);
	min_x = min(min_x, x_4);

	max_x = max(max_x, x_1);
	max_x = max(max_x, x_2);
	max_x = max(max_x, x_3);
	max_x = max(max_x, x_4);

	min_y = min(min_y, y_1);
	min_y = min(min_y, y_2);
	min_y = min(min_y, y_3);
	min_y = min(min_y, y_4);

	max_y = max(max_y, y_1);
	max_y = max(max_y, y_2);
	max_y = max(max_y, y_3);
	max_y = max(max_y, y_4);

	cout << (max_x - min_x) * (max_y - min_y) << endl;
}
 
int main() {
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	int tt; cin >> tt; for (int i = 1; i <= tt; i++) {solve();}
}