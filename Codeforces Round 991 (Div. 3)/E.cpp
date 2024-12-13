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

const ll limit = 2e3 + 10;
ll dp[limit][limit];

string a, b, x;
void solve() {
    cin >> a >> b;
    cin >> x;
    a = 'x' + a;
    b = 'x' + b;
    x = 'x' + x;
    res = 0;
     For(ll, i, 0, a.length() + 1){
        For(ll, j, 0, b.length() + 1){
            dp[i][j] = 0;
        }
    }
    For(ll, i, 1, a.length()){
        For(ll, j, 1, b.length()){
            if(i <= a.length()){
                dp[i + 1][j] = max(dp[i + 1][j], dp[i][j] + (x[i + j - 1] == a[i]));
                res = max(res, dp[i + 1][j]);
            }
            if(j <= b.length()){
                dp[i][j + 1] = max(dp[i][j + 1], dp[i][j] + (x[i + j - 1] == b[j]));
                res = max(res, dp[i][j + 1]);
            }
        }
    }
    
    cout << x.length() - res << endl;
}
 
int main() {
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	int tt; cin >> tt; for (int i = 1; i <= tt; i++) {solve();}
}