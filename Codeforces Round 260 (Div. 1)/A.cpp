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
const ll limit = 1e5 + 10;
ll dp[limit], a[limit], cnt[limit];
void solve() {
	cin >> n;
    For(ll, i, 1, n){
        cin >> a[i];
        cnt[a[i]]++;
    }
    dp[0] = 0;
    dp[1] = cnt[1];
    For(ll, i, 2, 1e5){
        dp[i] = max(dp[i - 1], dp[i - 2] + cnt[i] * i);
    }
    cout << dp[100000];
}
 
int main() {
	ios::sync_with_stdio(false);
	solve();
}