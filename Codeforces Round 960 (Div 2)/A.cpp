#include<iostream>
#include<algorithm>
using namespace std;
typedef long long ll;
#define For(type, i, a, b) for (type i = (a); i <= (b); ++i)
#define endl '\n'

ll res = 0;
ll test;
ll n;
const ll limit = 1e3 + 10;

ll a[limit];
ll dp[limit];
int main(){
    cin >> test;
    while(test--){
        cin >> n;
        ll ans = 0;
        For(ll, i, 1, 55)
            dp[i] = 0;
        For(ll, i, 1, n)
            a[i] = 0;
        For(ll, i, 1, n){
            cin >> a[i];
            dp[a[i]]++;
        }
        bool ok = false;
        // cout << ans << endl;
        For(ll, i, 1, n){
            if(dp[a[i]] % 2 == 1){
                ok = true;
                break;
            }
        }
        if(ok)  cout <<"YES" << endl;
        else cout <<"NO" << endl;
    }
}
