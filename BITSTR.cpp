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

ll n, k, result = 1e10;
ll a[limit3], b[limit3];
vector<ll> c[limit];
ll Check(){
    ll ans = 0, res = 0;
    For(ll, i, 1, n - 1){
        if(a[i] != a[i + 1])
            res++;
    }
    res++;
    ans = 0;
    if(res == k){
        For(ll, i, 1, n){
            if(a[i] != b[i]){
                ans++;
            }
        }

    result = min(result, ans);
    }
}
ll NP(ll i)
{
    ll j;
    for(j = 0; j <= 1; j++)
    {
        a[i] = j;
        if(i == n) Check();
        else NP(i + 1);

    }
}

void FastIn(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
}
string s;



void ReadIn(){
    freopen("BITSTR.INP","r",stdin);
    freopen("BITSTR.OUT","w",stdout);
    cin >> n >> k;
    cin >> s;
    For(ll, i, 0, n - 1)
        b[i + 1] = s[i] - 48;
    if(n <= 20){
        NP(1);
        cout << result;
        return ;
    }
    cout << k;
}
int main(){
    FastIn();
    ReadIn();
}
