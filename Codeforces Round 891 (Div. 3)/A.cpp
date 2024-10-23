#include <iostream>
#include<algorithm>
using namespace std;
typedef long long ll;
#define For(type, i, a, b) for (type i = (a); i <= (b); ++i)
#define endl '\n'
#define YES cout << "YES\n"
#define NO cout << "NO\n"

ll ans = 0, res = 0, temp = 0;
ll n;

const ll limit = 1e3;
ll a[limit];

void solve() {
	cin >> n;
    ll sum = 0;
	For(ll, i, 1, n){
        cin >> a[i];
        sum += a[i];
    }
    
    For(ll, i, 1, n){
        if((sum - a[i]) % 2 == a[i] % 2){
            cout <<"YES" << endl;
            return;
        }
    }
    cout << "NO" << endl;
}
 
int main() {
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	int tt; cin >> tt; for (int i = 1; i <= tt; i++) {solve();}
}