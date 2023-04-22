#include <bits/stdc++.h>
#define fi first
#define se second
#define FOR(i, a, b) for (int i = (a); i <= (b); ++i)
#define FORD(i, a, b) for(int i = (a); i >=(b); --i)
#define endl '\n'
#define debug(a) cout << a << endl
using namespace std;

typedef long long ll;
typedef pair <ll, ll> pll;
typedef vector <ll> vll;

const ll maxN = 1e18;
const ll minN = -1e18;


const ll limit = 2e5 + 5;
const ll limit1 = 1e6 + 5;
const ll limit2 = 1e3 + 5;

ll test;
ll x, n, m;
ll MOD;
ll res = 0, sum = 0, ans = 0, kd, hkd;
ll p, q;

void FastIn(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
}

ll CountDigit(ll n){
    res = 0;
    while(n != 0){
        n /= 10;
        res++;
    }
    return res;
}

struct MaTran
{
    ll c[20][20];
    MaTran()
    {
        c[1][1] = p;  c[1][2] = 0;
        c[2][1] = q;   c[2][2] = 1;
    }
};

long long multiply(long long a, long long b)
{
    if (b < 0)
        return m - multiply(a, -b);
    if (b == 0)
        return 0;
    long long ans = (multiply(a, b >> 1) << 1) % m;
    return (ans + (b & 1) * a) % m;
}

MaTran operator * (MaTran a, MaTran b)
{
    MaTran res;
    for (int i = 1; i <= 2; i++)
        for (int j = 1; j <= 2; j++)
        {
            res.c[i][j] = 0;
            for (int k = 1; k <= 2; k++)
                res.c[i][j] = (res.c[i][j] + multiply(a.c[i][k], b.c[k][j])) % MOD;
        }
    return res;
}


ll Pow(ll a, ll n){
    if(n == 0) return 1;
    if(n == 1) return a % m;
    ll t = Pow(a, n / 2) % m;
    if(n % 2 == 0)
        return multiply(t, t) % m;
    else
        return multiply(t, t) % m * a % m;
}


MaTran Powermod (MaTran a, ll n)
{
    if (n == 1)
        return a;
    if (n % 2 != 0)
        return Powermod(a, n - 1) * a;
    MaTran tmp = Powermod(a, n / 2);
    return (tmp * tmp);
}
void ReadIn(){
    cin >> x >> n >> m;
    MOD = m;
    p = Pow(10, CountDigit(x)) % m;
    q = x % m;
    MaTran A;
    A = Powermod(A, n - 1);
    cout <<  (multiply(A.c[1][1], q) + A.c[2][1]) % m << endl;
}
int main(){
    FastIn();
    ReadIn();
}
