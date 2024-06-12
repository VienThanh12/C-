#include<iostream>
#include<algorithm>
using namespace std;
typedef long long ll;

ll res = 0, ans = 0;
ll test;
ll n;
const ll limit = 3 * 1e5 + 5;
ll a[limit];

int main(){
    cin >> test;
    while(test--){
        cin >> n;
        ll res = 0, sum = 0, ans = 0;
        for(ll i = 1; i <= n; i++){
            cin >> a[i];
            sum += a[i];
            res = max(res, a[i]);
            if(sum - res == res) 
                ans ++;
        }
        cout << ans << endl;
    }
}
