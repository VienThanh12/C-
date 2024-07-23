#include<iostream>
#include<algorithm>
#include<map>
using namespace std;
typedef long long ll;
#define For(type, i, a, b) for (type i = (a); i <= (b); ++i)
#define endl '\n'

ll test;
ll n, m;
const ll limit = 2e5 + 10;
ll a[limit], sum[limit];
map<ll, ll> dp;

int main(){
    cin >> test;
    while(test--){
        cin >> n >> m;
        For(ll, i, 1, n){
            cin >> a[i];
            dp[a[i] + 1] = 0;
            dp[a[i]] = 0;
            dp[a[i] - 1] = 0;
        }
        sort(a + 1, a + 1 + n);
        For(ll, i, 1, n){
            sum[i] = sum[i - 1] + a[i];
        }
        For(ll, i, 1, n){
            dp[a[i]] = i; 
        }
        ll res = 0;
        For(ll, i, 1, n){
            ll first = i, second = dp[a[i] + 1];
            if(second == 0){
                second = dp[a[i]];
            }
            while(first <= second){
                ll mid = (first + second) / 2;
                if(sum[mid] - sum[i - 1] <= m){
                    // cout << mid << " " << i << dp[mid] - dp[i - 1] << endl;
                    res = max(res, sum[mid] - sum[i - 1]);
                    first = mid + 1;
                }
                else second = mid - 1;
            }
        }
        cout << res << endl;
        For(ll, i, 1, n){
            sum[i] = 0;
            dp[a[i]] = 0;
        }
    }   
}
