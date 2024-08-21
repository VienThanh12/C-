#include <iostream>
#include<algorithm>
using namespace std;

typedef long long ll;
#define For(type, i, a, b) for (type i = (a); i <= (b); ++i)
#define endl '\n'
 
ll n;
const ll limit = 2e5 + 10;
ll a[limit];


void solve() {
    cin >> n;
    if(n % 2 == 0){
        cout << -1 << endl;
        return;
    }
    a[(n + 1) / 2] = 1;
    ll kd = 2;
    for(ll i = (n + 1) / 2 + 1; i <= n; i++){
        a[i] = kd;
        kd += 2;
    }
    kd = 3;
    for(ll i = (n + 1) / 2 - 1; i >= 1; i--){
        a[i] = kd;
        kd += 2;
    }
    For(ll, i, 1, n)
        cout << a[i] <<" ";
    cout << endl;
}
 
int main() {
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	int tt; cin >> tt; for (int i = 1; i <= tt; i++) {solve();}
}