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
ll n, m, k, x, y, u, v;
ll res = 0, sum = 0, ans = 0, kd, hkd, answer;
bool ok = false;
ll a[limit3], b[limit3], f[limit3];

void FastIn(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
}
ll Pow(ll a, ll n){
    a %= MOD;
    if(n == 1) return a % MOD;
    ll tmp = Pow(a % MOD, n / 2);
    return (n & 1) ? tmp % MOD * tmp % MOD * a % MOD : tmp % MOD * tmp % MOD;
}

ll Count(ll m, ll n){
    f[0] = 1;
    ans = 1;
    For(ll, i, m + 1, m + n - 1){
        if(i == 0) continue;
        ans = (ans % MOD * i % MOD) % MOD;
    }
    For(ll, i, 1, n){
        f[i] = (f[i - 1] % MOD * i % MOD) % MOD;
    }
    return ans % MOD * Pow(f[n - 1], MOD - 2) % MOD;
}
void ReadIn(){
    cin >> m >> n;
    For(ll, i, 1, n){
        cin >> a[i];
        sum += a[i];
    }
    if(sum > m){
        cout << 0;
        return;
    }
    if(sum == m){
        cout << 1;
        return;
    }
    if(sum < m){
        m = m - sum;
      //  cout << m << " " << n << endl;
        cout << Count(m, n);
    }
}
int main(){
    FastIn();
    ReadIn();
}
