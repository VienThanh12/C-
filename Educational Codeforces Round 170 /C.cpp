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
const ll limit = 2e5 + 10;

ll a[limit];

void solve() {
	cin >> n >> k;
	For(ll, i, 1, n)
        cin >> a[i];
    sort(a + 1, a + 1 + n);
    res = 0;
    ll pos = 1;
    a[0] = 0;
    For(ll, i, 1, n){
        if(a[i] - a[i - 1] > 1) pos = i;
        while(a[i] - a[pos] + 1 > k){
            pos++;
        }
        res = max(res, i - pos + 1);
    }
    cout << res << endl;
}
 
int main() {
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	int tt; cin >> tt; for (int i = 1; i <= tt; i++) {solve();}
}