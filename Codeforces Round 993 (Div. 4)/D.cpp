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
ll a[limit];
ll dp[limit];

void solve() {
        cin >> n;
        For(ll, i, 1, n){
            cin >> a[i];
        }
    For(ll, i, 1, n){
        dp[i] = 0;
    }
    For(ll, i, 1, n){
        if(dp[a[i]] == 0){
            cout << a[i] <<" ";
            dp[a[i]] = 1;
        }
    }
    For(ll, i, 1, n){
        if(dp[i] == 0){
            cout << i << " ";
        }
    }
    cout << endl;

}
 
int main() {
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	int tt; cin >> tt; for (int i = 1; i <= tt; i++) {solve();}
}