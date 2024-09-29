#include <iostream>
#include<algorithm>
using namespace std;

typedef long long ll;
#define For(type, i, a, b) for (type i = (a); i <= (b); ++i)
#define endl '\n'
 

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
	ll n, k;
    cin >> n >> k;
    ll cnt = 0;
    if(k == 1){
        cout << n << endl;
        return;
    }
    while(Pow(k, cnt) <= n){
        cnt++;
    }
    cnt --;
    //  cout << cnt << endl;
    ll res = 0;
    while(n != 0){
        ll temp = n / Pow(k, cnt);
        n -= temp * Pow(k, cnt);
        res += temp;
        while(n < Pow(k, cnt)){
            cnt --;
        }
        if(cnt == 0){
            res += n;
            n = 0;
        }
    }
    cout << res << endl;
}
 
int main() {
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	int tt; cin >> tt; for (int i = 1; i <= tt; i++) {solve();}
}