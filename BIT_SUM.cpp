#include <bits/stdc++.h>
 
using namespace std;
 
#define fi first
#define se second
#define For(type, i, a, b) for (type i = (a); i <= (b); ++i)
#define endl '\n'
 
typedef long long ll;
typedef pair<ll, ll> ii;
 
 
const ll maxN = 1e18;
const ll minN = -1e18;
const ll MOD = 1e9 + 7;
const long d4i[4] = {-1 , 0 , 1 , 0} , d4j[4] = {0 , 1 , 0 , -1};
const long d8i[8] = {-1 , -1 , 0 , 1 , 1 , 1 , 0 , -1} , d8j[8] = {0 , 1 , 1 , 1 , 0 , -1};
 
const ll limit = 1e3 + 5;
const ll limit1 = 1e4 + 5;
const ll limit2 = 2e5 + 5;
const ll limit3 = 1e6 + 5;
 
ll test;
ll n, m, k, x, y, z, u, v;
ll res, sum, ans, kd, hkd, answer, cnt, type;
bool ok = false;
ll a[limit3], b[limit3], dp[limit3];
string s;
 
void FastIn(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
}
 
void update(ll p, ll val){
    for(ll i = p; i <= n; i += i & -i)
        dp[i] += val;
}
ll Get(ll p) {
    ll ans = 0;
    for(ll i = p; i; i -= i & -i)
        ans += dp[i];
    return ans;
}
 
void ReadIn(){
    cin >> n >> test;
    For(ll, i, 1, n){
        cin >> a[i];
        update(i, a[i]);
    }
 
    while(test --> 0){
        cin >> type >> u >> v;
        if(type == 2){
            //scout << v - dp[u] << endl;
            update(u, v - a[u]);
            a[u] = v;
        }
        if(type == 1){
            sum = Get(v) - Get(u - 1);
            cout << sum << endl;
        }
    }
}
int main(){
    FastIn();
    ReadIn();
}
