#include <bits/stdc++.h>
#define fi first
#define se second
#define For(type, i, a, b) for (type i = (a); i <= (b); ++i)

#define endl '\n'
using namespace std;

typedef long long ll;

const ll maxN = 1e18;
const ll minN = -1e18;
const ll MOD = 1e9 + 7;

const ll limit = 1e5 + 5;
const ll limit1 = 1e4 + 10;
const ll limit2 = 2e5 + 5;
const ll limit3 = 1e6 + 5;

ll test;
ll n, m, z, k;
ll res = 0, sum = 0, ans = 0, kd = 0, hkd = 0, answer = 0;
bool ok = false, okk = false;
string s;

void FastIn(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
}
ll Sum(ll x){
    sum = 0;
    For(ll, i, 1, sqrt(x)){
        if(x % i == 0){
            ll j = x / i;
            sum += i;
            if(i != j)
                sum += j;
        }
    }
    return sum;
}

void ReadIn(){
    ll a, b;
    cin >> a >> b;
    ll res_a = Sum(a), res_b = Sum(b);
    kd = __gcd(res_a, a);
    hkd = __gcd(res_b, b);
    //cout << kd << endl << hkd;
    if(res_a / kd == res_b / hkd && a / kd == b / hkd){
        cout << res_a / kd << endl << a / kd;
        return;
    }
    cout << -1;

}
int main(){
    FastIn();
    ReadIn();
}
