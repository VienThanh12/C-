#include <iostream>
#include<algorithm>
#include<math.h>
using namespace std;
typedef long long ll;
#define For(type, i, a, b) for (type i = (a); i <= (b); ++i)
#define endl '\n'
#define YES cout << "YES\n"
#define NO cout << "NO\n"

ll ans = 0, res = 0, temp = 0;
ll n;
ll k, l_1, r_1, l_2, r_2;

void solve() {
	cin >> k >> l_1 >> r_1 >> l_2 >> r_2;

    ll x = 1;
    res = 0;
    while(x <= r_2){

        ll low = (l_2 + x - 1)/ x;
        ll high = r_2 / x;
        
        ll u = max(l_1, low); 
        ll v = min(r_1, high);
        //  cout << u <<" " << v <<" " << x  << " " << r_1 << " " << r_2 / x << endl;
        if(u <= v){
            // cout << v - u + 1 << endl;
            res += v - u + 1;
        }
        if(x > r_2 / k){
            break;
        }
        x *= k;
    }
    cout << res << endl;
}
 
int main() {
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	int tt; cin >> tt; for (int i = 1; i <= tt; i++) {solve();}
}