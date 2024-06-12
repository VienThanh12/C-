#include<iostream>
#include<algorithm>
using namespace std;
typedef long long ll;

ll res = 0, ans = 0;
ll test;
ll h, n;
const ll limit = 3e5 + 1;
ll a[limit], c[limit];
ll m = 1e9 + 7;

ll Pow(ll a, ll n){
    if(n == 0) return 1;
    if(n == 1) return a % m;
    ll t = Pow(a, n / 2) % m;
    if(n % 2 == 0)
        return t * t % m;
    else
        return t * t % m * a % m;
}

ll l, r, k;

int main(){
    cin >> test;
    while(test--){
        cin >> l >> r >> k;
        cout << ((Pow(9 / k + 1, r) % m - Pow(9 / k + 1, l) % m) + m) % m << endl;
    }
}
