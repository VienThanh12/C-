#include <iostream>
#include<algorithm>
using namespace std;

typedef long long ll;
#define For(type, i, a, b) for (type i = (a); i <= (b); ++i)
#define endl '\n'
 
ll n;
const ll limit = 1e5 + 10;
ll a[limit];

void solve() {
	cin >> n;
    For(ll, i, 1, n)
        cin >> a[i];
    sort(a + 1, a + 1 + n);
    bool ok = true;
    ll x = a[1], y = a[2];
    For(ll, i, 1, n){
        if(a[i] % x != 0){
            y = a[i];
            break;
        }
    }
    For(ll, i, 1, n){
        if(a[i] % x != 0 && a[i] % y != 0)
            ok = false;
    }
    ok ? cout << "Yes" << endl : cout <<"No" << endl;
}
 
int main() {
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	int tt; cin >> tt; for (int i = 1; i <= tt; i++) {solve();}
}