#include <bits/stdc++.h>
#define fi first
#define se second
#define For(type, i, a, b) for (type i = (a); i <= (b); ++i)
#define Ford(type, i, a, b) for (type i = (a); i >= (b); --i)
#define Rep(type, i, a, b) for (type i = (a); i < (b); ++i)
#define Repd(type, i, a, b) for(type i = (a); i > (b); --i)
#define endl '\n'
using namespace std;

typedef long long ll;

const ll maxN = 1e18;
const ll minN = -1e18;
const ll MOD = 1e9 + 7;

const ll limit = 1e3 + 5;
const ll limit1 = 1e4 + 5;
const ll limit2 = 2e5 + 5;
const ll limit3 = 1e6 + 5;

ll test;
ll n, m, k, y, u, v, x;
ll res = 0, sum = 0, ans = 0, kd, hkd, answer;
bool ok = false;
ll a[limit3], b[limit3], dp[limit3];

void FastIn(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
}

void update(ll p, ll val){
    for(ll i = p; i <= limit3; i += i & -i)
        dp[i] = max(val, dp[i]);
}
ll Get(ll p) {
    ll ans = 0;
    for(int i = p; i; i -= i & -i)
        ans = max(dp[i], ans);
    return ans;
}

void ReadIn(){
    cin >> n;
    for(ll i = n; i >= 1; i--){
        cin >> a[i];
        a[i]++;
    }
    For(ll, i, 1, n){
        x = a[i];
        dp[x] = Get(x) + 1;
        update(x, dp[x]);
        res = max(res, dp[x]);
    }
    cout << res;
}
int main(){
    FastIn();
    ReadIn();
}
