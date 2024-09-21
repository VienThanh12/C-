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
    ll sum = 0;
    For(ll, i, 1, n){
        cin >> a[i];
        sum += a[i];
    }

    if(n == 1 || n == 2){
        cout << -1 << endl;
        return;
    }
    sort(a + 1, a + 1 + n);
    ll requires_robin = a[n / 2 + 1] * n * 2;
    cout << max(ll(0),requires_robin - sum + 1) << endl;
}
 
int main() {
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	int tt; cin >> tt; for (int i = 1; i <= tt; i++) {solve();}
}