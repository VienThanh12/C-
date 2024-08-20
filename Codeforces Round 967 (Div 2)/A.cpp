#include <iostream>
#include<algorithm>
using namespace std;

typedef long long ll;
#define For(type, i, a, b) for (type i = (a); i <= (b); ++i)
#define endl '\n'
 
const ll limit = 1e3 + 100;

ll a[limit];
ll n;
ll dp[limit];

void solve() {
	cin >> n;
    For(ll, i, 1, n){
        cin >> a[i];
        dp[a[i]]++;
    }
    ll res = 0;

    For(ll, i, 1, n){
        res = max(res, dp[a[i]]);
    }
    For(ll, i, 1, n)
        dp[a[i]] = 0;
    cout << n - res << endl;
}
 
int main() {
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	int tt; cin >> tt; for (int i = 1; i <= tt; i++) {solve();}
}