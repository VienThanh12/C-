#include <iostream>
#include<algorithm>
using namespace std;

typedef long long ll;
#define For(type, i, a, b) for (type i = (a); i <= (b); ++i)
#define endl '\n'
 
const ll limit = 2e5 + 10;

ll x[limit], y[limit];
ll n;
ll dp[limit][3];

void solve() {
	cin >> n;
    For(ll, i, 1, n){
        cin >> x[i] >> y[i];
        dp[x[i]][y[i]] = 1;
    }
    ll res = 0;
    For(ll, i, 1, n){
        if(y[i] == 0){
            if(dp[x[i]][0] == 1 && dp[x[i]][1] == 1){
                res += n - 2;
            }
        }
    }

    For(ll, i, 1, n){
        if(y[i] == 0){
            if(dp[x[i]][0] == 1 && dp[x[i] + 2][0] == 1 && dp[x[i] + 1][1] == 1)
                res++;
        }
    }
    For(ll, i, 1, n){
        if(y[i] == 1){
            if(dp[x[i]][1] == 1 && dp[x[i] + 2][1] == 1 && dp[x[i] + 1][0] == 1){
                res++;
            }
        }
    }
    cout << res << endl;
    For(ll, i, 1, n){
        dp[x[i]][y[i]] = 0;
    }
}
 
int main() {
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	int tt; cin >> tt; for (int i = 1; i <= tt; i++) {solve();}
}