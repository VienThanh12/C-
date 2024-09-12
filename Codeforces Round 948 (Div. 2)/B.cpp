#include <iostream>
#include<algorithm>
using namespace std;

typedef long long ll;
#define For(type, i, a, b) for (type i = (a); i <= (b); ++i)
#define endl '\n'
 
ll x;
ll res[35];


ll Pow(ll a, ll n){
    if(n == 0) return 1;
    if(n == 1) return a;
    ll t = Pow(a, n / 2);
    if(n % 2 == 0)
        return t * t;
    else
        return t * t * a;
}
void solve() {
    cin >> x;
    ll ans = 0;
    for(ll i = 32; i >= 0; i--){
        ll temp = Pow(2, i);
        if(temp <= x){
            x -= temp;
            res[i] = 1;
            ans = max(ans, i);
        }
    }

    
    cout << ans + 1 << endl;
    For(ll, i, 0, ans){
        cout << res[i] <<" ";
    }
    for(ll i = 32; i >= 0; i--){
        res[i] = 0;
    }
    cout << endl;
}
 
int main() {
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	int tt; cin >> tt; for (int i = 1; i <= tt; i++) {solve();}
}