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
const ll limit = 5e2 + 10;

ll a[limit][limit];

ll min_val = 1e10;

ll dfs(ll x, ll y){

    min_val = min(ll(min_val), ll(a[x][y]));
    if(x + 1 <= n && y + 1 <= n){
        dfs(x + 1, y + 1);
    }
}

void solve() {
	cin >> n;
    For(ll, i, 1, n)
        For(ll, j, 1, n)
            cin >> a[i][j];

    res = 0;
    For(ll, i, 1, n){
        min_val = 1e18;
        dfs(1, i);
        if(min_val < 0){
            res += abs(min_val);
        }
    }
    For(ll, i, 2, n){
        min_val = 1e18;
        dfs(i, 1);
        if(min_val < 0){
            res += abs(min_val);
        }
    }
    cout << res << endl;
}
 
int main() {
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	int tt; cin >> tt; for (int i = 1; i <= tt; i++) {solve();}
}