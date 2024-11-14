#include <iostream>
#include<algorithm>
#include<map>
using namespace std;
typedef long long ll;
#define For(type, i, a, b) for (type i = (a); i <= (b); ++i)
#define endl '\n'
#define YES cout << "YES\n"
#define NO cout << "NO\n"

ll ans = 0, res = 0, temp = 0;
ll n;

const ll limit = 2e3 + 20;

ll a[limit];

map<ll, ll> b;

// bool check(ll k){
//     ll cnt = 0;
//     For(ll, i, 1, n){
      
//     }
// }

void solve() {
	cin >> n;
    For(ll, i, 1, n)
        cin >> a[i];
    sort(a + 1, a + 1 + n);
    if(n % 2 == 0){
        ll res = -1e18;
        for(ll i = 1; i <= n; i += 2){
            res = max(res, a[i + 1] - a[i]);
        }
        cout << res << endl;
        return;
    }   

    // res = 1e18;
    // ll first = 1, second = 1e18, mid = 0;
    // while(first <= second){
    //     mid = (first + second) / 2;
    //     if(check(mid)){
    //         second = mid - 1;
    //         res = min(res, mid);
    //     }
    //     else first = mid + 1;
    // }


    For(ll, i, 1, n){
        b[a[i]] = 1;
    }
    res = 1e18;
    For(ll, i, 1, n){
        ll kd = 1e18, ans = -1e18;
        For(ll, j, max(ll(0), a[i] - 2), min(ll(1e18), a[i] + 2)){
            if(b[j] == 0){
                kd = min(kd, abs(a[i] - j));
            } 
        }
        ans = max(kd, ans);
        if(i % 2 == 0){
            for(ll j = 1; j <= i - 3; j += 2){
                ans = max(ans, abs(a[j] - a[j + 1]));
            }
            ans = max(ans, abs(a[i - 1] - a[i + 1]));
            for(ll j = i + 2; j <= n; j += 2){
                ans = max(ans, abs(a[j] - a[j + 1]));
            }
        }
        if(i % 2 == 1){
            for(ll j = 1; j <= i - 2; j += 2){
                ans = max(ans, abs(a[j] - a[j + 1]));
            }
            for(ll j = i + 1; j <= n; j += 2){
                ans = max(ans, abs(a[j] - a[j + 1]));
            }
        }
        res = min(res, ans);

    }

    cout << res << endl;
    For(ll, i, 1, n){
        b[a[i]] = 0;
    }
    
}
 
int main() {
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	int tt; cin >> tt; for (int i = 1; i <= tt; i++) {solve();}
}