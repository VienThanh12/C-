#include<iostream>
#include<algorithm>
using namespace std;
typedef long long ll;
#define For(type, i, a, b) for (type i = (a); i <= (b); ++i)
#define endl '\n'

ll res = 0;
ll test;
ll n, k;
const ll limit = 1e5 + 10;
ll dp[limit];
int main(){
    cin >> test;
    while(test--){
        cin >> n >> k;
        For(ll, i, 0, n * 2)
            dp[i] = 0;
        For(ll, i, 1, n){
            For(ll, j, 1, n){
                dp[i + j] ++;
            }
        }
        sort(dp + 1, dp + 1 + n + n);

        ll sum = 0, ans = 0;
        for(ll i = n + n; i >= 2; i--){
            if(sum < k && dp[i] > 0){
                sum += dp[i];
                ans++;
            }
        }
        cout << ans << endl;
    }
}
