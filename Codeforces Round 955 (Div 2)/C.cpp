#include<iostream>
#include<algorithm>
using namespace std;
typedef long long ll;
#define For(type, i, a, b) for (type i = (a); i <= (b); ++i)
#define endl '\n'

ll res = 0;
ll test;
ll n, l, r;
const ll limit = 1e5 + 10;
ll a[limit];
ll dp[limit];
int main(){
    cin >> test;
    while(test--){
        cin >> n >> l >> r;
        For(ll, i, 1, n)
            dp[i] = 0;
        For(ll, i, 1, n){
            cin >> a[i];
            dp[i] = dp[i - 1] + a[i];
        }
        res = 0;
        ll first, second, mid, sum;
        bool ok = false;
        ll ans;
        For(ll, i, 1, n){
            first = i, second = n; 
            ans = 1e18;
            ok = false;
            while(first <= second){
                mid = (first + second) / 2;
                sum = dp[mid] - dp[i - 1];
                if(sum >= l && sum <= r){
                    second = mid - 1;
                    ans = min(ans, mid);
                    ok = true;
                }
                else if(sum < l){
                    first = mid + 1;
                }
                else if(sum > r){
                    second = mid - 1;
                }
            }
            if(ok == true){
                res ++;
                i = ans;
            }
        }
        cout << res << endl;
    }
}
