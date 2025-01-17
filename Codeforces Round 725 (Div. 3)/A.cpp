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
const ll limit = 1e3 + 10;
ll a[limit];


void solve() {
	cin >> n;
    ll x, y;

    For(ll, i, 1, n){
        cin >> a[i];
        if(a[i] == 1){
            x = i;
        }
        if(a[i] == n){
            y = i;
        }
    }
    if(x > y){
        swap(x, y);
    }
    // 1 x < y  n 

    // 2  1 5 3 4
    // 1 2 3
    cout << min(n - y + x + 1, min(n - x + 1, y)) << endl;
}
 
int main() {
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	int tt; cin >> tt; for (int i = 1; i <= tt; i++) {solve();}
}