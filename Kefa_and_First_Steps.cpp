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
ll a[limit];
ll dp[limit];
void solve() {
	cin >> n;
    For(ll, i, 1, n)
        cin >> a[i];
        
    dp[0] = 0;
    res = 0;
    For(ll, i, 1, n){
        if(a[i] <= a[i + 1]){
            dp[i] = dp[i - 1] + 1;
            res = max(res, dp[i]);
        }
        else dp[i] = 0;
    }
    cout << res + 1;
}
 
int main() {
	ios::sync_with_stdio(false);
    solve();
}