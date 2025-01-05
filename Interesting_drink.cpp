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
ll a[limit], dp[limit];
ll q, x;
void solve() {
	cin >> n;
    For(ll, i, 1, n){
        cin >> a[i];
    }
    ll x = 1;
    sort(a + 1, a + 1 + n);
    For(ll, i, 1, 100000 + 10){
        dp[i] = dp[i - 1];
        if(i >= a[x] && x <= n){
            x++;
            dp[i] ++;
            while(x <= n && a[x] == a[x - 1]){
                x++;
                dp[i]++;
            }
        }
    }
    cin >> q;
    while(q--){
        cin >> x;
        if(x > 1e5){
            cout << dp[100000] << endl;
        }
        else
        cout << dp[x] << endl;
    }
    
}
 
int main() {
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
    solve();
}