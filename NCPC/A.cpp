#include <bits/stdc++.h>
#define fi first
#define se second
#define For(type, i, a, b) for (type i = (a); i <= (b); ++i)
#define Ford(type, i, a, b) for (type i = (a); i >= (b); --i)
#define Rep(type, i, a, b) for (type i = (a); i < (b); ++i)
#define Repd(type, i, a, b) for(type i = (a); i > (b); --i)
#define endl '\n'
#define debug(a) cout << a << endl
using namespace std;

typedef long long ll;
typedef pair<ll, ll> pll;
typedef vector<ll> vll;

const ll maxN = 1e18;
const ll minN = -1e18;
const ll MOD = 1e9 + 7;

const ll limit = 1e6 + 10;

ll test;
ll n, c;
ll x[limit];
ll t_1[limit]; // case 1 xi >= xk
ll t_2[limit]; // case 2 xi < xk 

void FastIn(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
}

void ReadIn(){
    cin >> n >> c;
    For(ll, i, 1, n)
        cin >> x[i];

    For(ll, i, 1, n){
        t_1[i] = c * i - x[i];
    }
    // For(ll, i, 1, n)
    //     cout << t_1[i] << " ";
    For(ll, i, 1, n){
        t_2[i] = c * i + x[i];
    }
    // For(ll, i, 1, n){
    //     cout << t_2[i] << " ";
    // }

    ll u = -1e18, v = -1e18;

    For(ll, i, 1, n){
        u = max(u, t_1[i]);
        v = max(v, t_2[i]);
        cout << max(x[i] - c * i + u, -x[i] - c * i + v) << " "; 
    }

    
}
int main(){
    FastIn();
    ReadIn();
}

