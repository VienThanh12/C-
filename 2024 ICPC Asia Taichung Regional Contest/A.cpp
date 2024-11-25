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
ll a[10];

void solve() {
	cin >> a[1] >> a[2] >> a[3] >> a[4];
    sort(a + 1, a + 1 + 4);
    For(ll, i, 1, 5){
        if(a[i] != i){
            cout << i << endl;
            return;
        }
    }
}
 
int main() {
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	solve();
}