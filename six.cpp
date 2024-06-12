#include<iostream>
#include<algorithm>
using namespace std;
typedef long long ll;

ll res = 0, ans = 0;
ll test;
ll h, n;
const ll limit = 3e5 + 1;
ll a[limit], c[limit];

// a[i] la hang
// b[i] la cot
int main(){
    cin >> test;
    while(test--){
        ll first = 1, second = 1e12, mid = 0;
        ll res = 1e17, sum = 0;
        cin >> h >> n;
        for(ll i = 1; i <= n; i++)
            cin >> a[i];
        for(ll i = 1; i <= n; i++)
            cin >> c[i];
        while(first <= second){
            mid = (first + second) / 2;
            sum = 0;
            for(ll i = 1; i <= n; i++){
                sum = sum + ((mid - 1) / c[i] + 1) * a[i];
            }
            //cout << mid <<' ' << sum << endl ;
            if(sum < h){
                first = mid + 1;
            }
            else if (sum >= h){
                second = mid - 1;
                res = min(res, mid);
            }
        }
        cout << res << endl;
    }
}
