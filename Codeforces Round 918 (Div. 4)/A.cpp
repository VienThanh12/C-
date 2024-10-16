#include <iostream>
#include<algorithm>
using namespace std;
typedef long long ll;
#define For(type, i, a, b) for (type i = (a); i <= (b); ++i)
#define endl '\n'
#define YES cout << "YES\n"
#define NO cout << "NO\n"

ll ans = 0, res = 0, temp = 0;
ll a[5];

void solve() {
	cin >> a[1] >> a[2] >> a[3];
    sort(a + 1, a + 1 + 3);

    if(a[1] != a[2]){
        cout << a[1] << endl;
        return;
    }
    else cout << a[3] << endl;
}
 
int main() {
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	int tt; cin >> tt; for (int i = 1; i <= tt; i++) {solve();}
}