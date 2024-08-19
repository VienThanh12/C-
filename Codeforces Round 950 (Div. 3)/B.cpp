#include <iostream>
#include<algorithm>
using namespace std;

typedef long long ll;
#define For(type, i, a, b) for (type i = (a); i <= (b); ++i)
#define endl '\n'
 
const ll limit = 1e4 + 10;

ll a[limit];

void solve() {
    ll n, f, k;
    cin >> n >> f >> k;
    For(ll, i, 1, n)
        cin >> a[i];
    ll fav = a[f];
    sort(a + 1, a + 1 + n, greater<int>());

    //  cout << fav << endl;
    //  cout << a[k] << endl;
    if(fav < a[k]) {
        cout <<"NO" << endl;
        return;
    }
    if(fav > a[k]){
        cout << "YES" << endl;
        return;
    }
    if(a[k] != a[k + 1] || k == n){
        cout <<"YES" << endl;
        return;
    }
    if(fav == a[k] && a[k] == a[k + 1] && k + 1 <= n){
        cout << "MAYBE" << endl;
        return;
    }
    For(ll, i, 1, n){
        a[i] = -1e18;
    }
}
 
int main() {
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	int tt; cin >> tt; for (int i = 1; i <= tt; i++) {solve();}
}