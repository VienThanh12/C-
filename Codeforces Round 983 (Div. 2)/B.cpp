#include <iostream>
#include<algorithm>
using namespace std;
typedef long long ll;
#define For(type, i, a, b) for (type i = (a); i <= (b); ++i)
#define endl '\n'
#define YES cout << "YES\n"
#define NO cout << "NO\n"

ll ans = 0, res = 0, temp = 0;
ll n, k;

void solve() {
	cin >> n >> k;
    
    if(n == 1){
        cout << 1 << endl;
        cout << 1 << endl;
        return;
    }
    if(k == 1){
        cout << -1 << endl;
        return;
    }
    ll x, y;
    bool ok = false;

    for(ll i = 2; i <= n - 1; i += 2){
        ll temp = k * 2 - i + 1;

        if(temp <= n && temp % 2 == 1){
            cout << 3 << endl;
            cout << 1 <<" " << i <<" " << temp << endl;
            return;
        }
    }
    cout << -1 << endl;
    
}
 
int main() {
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	int tt; cin >> tt; for (int i = 1; i <= tt; i++) {solve();}
}