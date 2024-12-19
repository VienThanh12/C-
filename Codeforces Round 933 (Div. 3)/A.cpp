#include <iostream>
#include<algorithm>
using namespace std;
typedef long long ll;
#define For(type, i, a, b) for (type i = (a); i <= (b); ++i)
#define endl '\n'
#define YES cout << "YES\n"
#define NO cout << "NO\n"

ll ans = 0, res = 0, temp = 0;
ll n, m, k;
const ll limit = 1e5 + 10;
ll a[limit], b[limit];

void solve() {
	cin >> n >> m >> k;
    res = 0;
    For(ll, i, 1, n)
        cin >> a[i];
    For(ll, i, 1, m)
        cin >> b[i];
    
    For(ll, i, 1, n)
        For(ll, j, 1, m){
            if(a[i] + b[j] <= k)
                res ++;
        }
    cout << res << endl;
}
 
int main() {
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	int tt; cin >> tt; for (int i = 1; i <= tt; i++) {solve();}
}