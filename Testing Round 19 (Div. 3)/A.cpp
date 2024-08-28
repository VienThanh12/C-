#include <iostream>
#include<algorithm>
using namespace std;

typedef long long ll;
#define For(type, i, a, b) for (type i = (a); i <= (b); ++i)
#define endl '\n'
 
const ll limit = 1e3 + 10;
ll a[limit];
ll n;

void solve() {
	cin >> n;
    For(ll, i, 1, n)
        cin >> a[i];
    ll cnt = 0, res = 0;
    For(ll, i, 1, n){
        if(cnt % 2 == 0){
            res += a[i];
        }
        else {
            res -= a[i];
        }
        cnt++;
    }
    cout << res << endl;
}
 
int main() {
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	int tt; cin >> tt; for (int i = 1; i <= tt; i++) {solve();}
}