#include<iostream>
#include<algorithm>
using namespace std;
typedef long long ll;
#define For(type, i, a, b) for (type i = (a); i <= (b); ++i)
#define endl '\n'

ll res;
ll test;
ll l, r;

const ll limit = 2e5 + 10;
ll dp[limit];
ll cnt[limit];
int main(){
    cin >> test;
    ll kd = 1;
    ll temp = 3;
    For(ll, i, 1, 2e5 + 10){
        dp[i] = dp[i - 1];
        if(i >= temp){
            kd++;
            temp *= 3;
        }
        cnt[i] = kd;
        dp[i] += kd;
    }
    while(test--){
        cin >> l >> r;
        
        ll cnt_2 = min(2 * cnt[l] + cnt[l + 1], 2 * cnt[l + 1] + cnt[l]);
        
        // cout << cnt[199999] << endl;
        // cout << cnt_2 << endl;
        ll cnt_res = dp[r] - dp[l + 1];

        cout << cnt_res + cnt_2 << endl;
    }
}
