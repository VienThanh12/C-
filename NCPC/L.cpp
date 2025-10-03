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

const ll limit = 2e5 + 5;
const ll limit1 = 1e6 + 5;
const ll limit2 = 1e3 + 5;
const ll limit3 = 1e4 + 5;

ll test;
ll n;
ll x, y;

void FastIn(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
}

int gcd(int a, int b) {
    while (b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}

void ReadIn(){
    cin >> test;
    ll res = 1e18;
    while(test--){
        cin >> n >> x >> y;
        res = min(res, n + x * y / gcd(x, y));
    }
    cout << res;
}
int main(){
    FastIn();
    ReadIn();
}
