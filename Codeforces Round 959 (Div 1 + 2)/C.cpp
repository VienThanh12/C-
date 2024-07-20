#include<iostream>
#include<algorithm>
using namespace std;
typedef long long ll;
#define For(type, i, a, b) for (type i = (a); i <= (b); ++i)
#define endl '\n'

ll test;
ll n, x;
const ll limit = 2e5 + 100;
ll a[limit];

ll cnt[limit];
ll dp[limit]; // Let 𝑑𝑝[𝑖] — the number of good subsegments with left boundary at 𝑖

int main(){
    cin >> test;
    while(test--){
        cin >> n >> x;
        For(ll, i, 1, n + 10){
            cnt[i] = 0;
            dp[i] = 0;
            a[i] = 0;
        }
        For(ll, i, 1, n){
            cin >> a[i];
            cnt[i] = cnt[i - 1] + a[i];
        }

        for(ll i = n; i >= 1; i--){
            ll first = i, second = n;
            ll j = 0;
            bool find = 0;
            while(first <= second){
                ll mid = (first + second) / 2;
                if(cnt[mid] - cnt[i - 1] > x){
                    find = 1;
                    second = mid - 1;
                    j = mid;
                } 
                else {
                    first = mid + 1;
                }
            }
            if(find) {
                dp[i] = dp[j + 1] + j - i;
            }
            else dp[i] = n - i + 1;
        }   
        ll res = 0;
        For(ll, i, 1, n)
            res += dp[i];
        For(ll, i, 1, n)
            cout << dp[i] <<" ";
        cout << res << endl;
    }
}

/*
We'll solve the problem by dynamic programming. 
Let 𝑑𝑝[𝑖] — the number of good subsegments with left boundary at 𝑖. 
We will count 𝑑𝑝 from the end, for each 𝑖 we will find such a minimum 𝑗 that the sum on the subsegment [𝑖;𝑗] is greater than 𝑥. 
If there is no such 𝑗, then all right bounds are good, otherwise 𝑑𝑝[𝑖]=𝑑𝑝[𝑗+1]+𝑗−𝑖. 
To search for 𝑗, we can use a binary search on prefix sums. 
The answer will be the sum of all 𝑑𝑝.
*/
// https://codeforces.com/contest/1994/problem/C