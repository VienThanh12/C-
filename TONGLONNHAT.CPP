#include<iostream>
using namespace std;
typedef long long ll;

ll n, m;
ll res = 0;
const ll limit = 1e3 + 100;
ll a[limit][limit], b[limit][limit];
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    cin >> n >> m;
    for(ll i = 1; i <= n; i++)
    for(ll j = 1; j <= m; j++){
        cin >> a[i][j];
    }
    for(ll i = 1; i <= n; i++){
        for(ll j = 1; j <= m; j++){
            b[i][j] = b[i][j - 1] + a[i][j] + b[i - 1][j] - b[i - 1][j - 1];

        }
    }

    res = -1e18;
    ll sum = 0;

    if(n <= 200 && m <= 200){
    for(ll k = 1; k <= n; k++){
    for(ll d = 1; d <= m; d++){
    for(ll i = 1; i <= n - k + 1; i++){
        for(ll j = 1; j <= m - d + 1; j++){
            sum  = 0;
            sum = b[i + k - 1][j + d - 1] - b[i + k - 1][j - 1] - b[i - 1][j + d - 1] + b[i - 1][j - 1];
            res = max(res, sum);
        }
        }
        }
    }
    cout << res;
    }
    else{
    sum = 0;
    for(ll i = 1; i <= n; i++){
        for(ll j = 1; j <= m ; j++){
         //   sum  = 0;
            sum += a[i][j];

        }
    }

    cout << sum;
    }
}

