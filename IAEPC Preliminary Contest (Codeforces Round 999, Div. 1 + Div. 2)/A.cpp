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
const ll limit = 1e3 + 1;

ll a[limit];

void solve() {
	cin >> n;
    ll odd = 0, even = 0;

    For(ll, i, 1, n){
        cin >> a[i];
        a[i] % 2 == 0 ? even ++ : odd ++;
    }
    ll cnt = 0;
    res = 0;
    // cout << even <<" " << odd << endl;
    // res = 0;
    // while(true){
    //     cnt == 0 ? even -- : odd --;
    //     if(cnt == 0 && even < 0){
    //         break;
    //     }
    //     if(cnt == 1 && odd < 0){
    //         break;
    //     }
    //     res ++;
    //     cnt ++;
    //     cnt %= 2;
    // }
    if(even > 0){
        res++;
    }
    else {
        odd --;
        cout << odd << endl;
        return;
    }
    cout << res + odd << endl;
}
 
int main() {
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	int tt; cin >> tt; for (int i = 1; i <= tt; i++) {solve();}
}