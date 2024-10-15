#include <iostream>
#include<algorithm>
using namespace std;
typedef long long ll;
#define For(type, i, a, b) for (type i = (a); i <= (b); ++i)
#define endl '\n'
#define YES cout << "YES\n"
#define NO cout << "NO\n"

const ll limit = 2e5 + 10;

ll n[limit], k[limit];

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

void solve() {
	ll test;
    cin >> test;
    For(ll, i, 1, test){
        cin >> n[i];
    }
    For(ll, i, 1, test){
        cin >> k[i];
    }
    For(ll, i, 1, test){
        cout << Pow(2, k[i]) << endl;
    }
}
 
int main() {
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
    solve();
}