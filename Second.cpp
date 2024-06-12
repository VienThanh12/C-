#include<iostream>
#include<algorithm>
using namespace std;
typedef long long ll;

ll res = 0, ans = 0;
ll test;
ll n;

int main(){
    cin >> test;
    while(test--){
        cin >> n;
        ans = 0;
        for(ll i = 2; i <= n; i++){
            res = 0;
            ll k = n / i;
            res = k * (1 + k) / 2 * i;
            ans = max(ans, res);
        }
        for(ll i = 2; i <= n; i++){
            res = 0;
            ll k = n / i;
            res = k * (1 + k) / 2 * i;
            if(res == ans){
                cout << i << endl;
                break;
            }
        }
    }
}
