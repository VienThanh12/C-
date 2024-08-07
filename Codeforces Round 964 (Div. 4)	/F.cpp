#include<iostream>
#include<algorithm>
using namespace std;
typedef long long ll;
#define For(type, i, a, b) for (type i = (a); i <= (b); ++i)
#define endl '\n'

ll res;
ll test;
ll n, k;

const ll limit = 2e5 + 100;
ll a[limit];

ll mod = 1e9 + 7;
ll f[limit];

ll pow(ll a, ll n)
{
    a%=mod;
    if(n == 1) return a%mod;
    int tmp = pow(a%mod, n/2);
    return (n & 1) ? tmp%mod * tmp%mod * a%mod : tmp%mod * tmp%mod;
}

ll c(ll k, ll n) {
    if(k > n) return 0;
	if (n == k || k == 0) return 1;
	return f[n] * pow((f[k] * f[n - k] % mod), mod - 2) % mod;
}

int main(){
    cin >> test;

    f[1] = 1;
    For(ll, i, 2, 2e5 + 9){
        f[i] = (f[i - 1] % mod * i % mod) % mod;
    }

    while(test--){
        cin >> n >> k;
        For(ll, i, 1, n){
            cin >> a[i];
        }
        sort(a + 1, a + 1 + n);
        res = 0;

        For(ll, j, 1, n ){
            ll cnt_first = c(k / 2 , (j - 1)) % mod; 
            ll cnt_last = c(k / 2, (n - j)) % mod;
            // cout << cnt_first <<" " << cnt_last << endl;
            res = ((res % mod + a[j] % mod * cnt_first % mod * cnt_last % mod) % mod + mod) % mod;
            // cout << a[j] * (j - 1) * (n - j) << endl;
        }
        cout << res << endl;
    }
}
