#include <iostream>
#include<algorithm>
using namespace std;
typedef long long ll;
#define For(type, i, a, b) for (type i = (a); i <= (b); ++i)
#define endl '\n'
#define YES cout << "YES\n"
#define NO cout << "NO\n"

const ll limit = 2e5 + 10;
ll a[limit];
ll ans = 0, res = 0, temp = 0;
ll n, k;

void solve() {
	cin >> n >> k;
	For(ll, i, 1, n)
        cin >> a[i];
    sort(a + 1, a + 1 + n);

    ll cnt = 0;
    For(ll, i, 0, n){
        cnt += a[i];
        ll ssh = n - i;
        ll check = (k - cnt) % ssh == 0 ? 0 : 1;
        if(a[i + 1] >= (k - cnt) / ssh + check){
            cout << k + i << endl;
            return;
        }
    }
}
 
int main() {
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	int tt; cin >> tt; for (int i = 1; i <= tt; i++) {solve();}
}