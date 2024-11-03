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
ll cnt[limit];

void solve() {
	cin >> n >> k;
    For(ll, i, 1, k){
        ll u, v;
        cin >> u >> v;
        cnt[u] += v;
    }
    
    res = 0;
    sort(cnt + 1, cnt + 1 + k, greater<int>());

    For(ll, i, 1, n){
        res += cnt[i];
    }
    cout << res << endl;
    For(ll, i, 1, k){
        cnt[i] = 0;
    }
}
 
int main() {
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	int tt; cin >> tt; for (int i = 1; i <= tt; i++) {solve();}
}