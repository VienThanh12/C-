#include<iostream>
#include<algorithm>
using namespace std;
typedef long long ll;

ll res = 0, ans = 0;
ll test;
ll x, y, z, k;

// a[i] la hang
// b[i] la cot
int main(){
    cin >> test;
    while(test--){
        cin >> x >> y >> z >> k;
        res = 0;
        for(ll i = 1; i <= x; i++)
            for(ll j = 1; j <= y; j++){
                ll u = 0, v = 0;
                ll sum = i * j;
                if(k % (sum) == 0 && k / sum <= z){
                    res = max(res, (x - i + 1) * (y - j + 1) * (z - k / sum + 1));
                }
            }
        cout << res << endl;
    }
}
