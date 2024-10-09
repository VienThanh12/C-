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

const ll limit = 2e5 + 10;
ll dp[limit];

ll sum_a_b(ll x){
    ll sum = 0;
    while(x != 0){
        sum += x % 10;
        x /= 10;
    }
    return sum;
}
void solve() {
	cin >> n;
    cout << dp[n] << endl;
}
 
int main() {
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
    dp[1] = 1;
    For(ll, i, 2, 2e5 + 1){
        dp[i] = dp[i - 1] + sum_a_b(i);
    }
	int tt; cin >> tt; for (int i = 1; i <= tt; i++) {solve();}
}