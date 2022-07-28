#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
const ll limit = 1e6 + 5;

ll test, n, k;
ll a[limit];
map<ll, ll> dp;
ll res = 0;

int main(){
    cin >> n >> k;
    for(ll i = 1; i <= n; i++){
        cin >> a[i];
   //     dp[a[i]]++;
    }
    for(ll i = 1; i <= n; i++){
        dp[a[i]]++;
        res += dp[k - (a[i] * a[i])];
    }
    cout << res;
}

