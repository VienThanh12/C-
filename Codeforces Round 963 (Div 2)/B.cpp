#include<iostream>
#include<algorithm>
using namespace std;
typedef long long ll;
#define For(type, i, a, b) for (type i = (a); i <= (b); ++i)
#define endl '\n'

ll res, res_2;
ll test;
ll n;
const ll limit = 2e5 + 10;
ll a[limit];

int main(){
    cin >> test;
    while(test--){
        cin >> n;
        For(ll, i, 1, n)
            cin >> a[i];
        
        ll max_odd = 0, max_even = 0, cnt_even = 0;
        For(ll, i, 1, n){
            if(a[i] % 2 == 1){
                max_odd = max(max_odd, a[i]);
            }
            else if(a[i] % 2 == 0) {
                max_even = max(max_even, a[i]);
                cnt_even ++;
            }
        }
        if(max_odd == 0){
            cout << 0 << endl;
            continue;
        }
        res_2 = 0;
        if(max_even > max_odd) {
            res_2 = cnt_even + 1;
        }
        else {
            res_2 = cnt_even;
        }
        res = 0;

        // cout << max_odd << endl;
        sort(a + 1, a + 1 + n);
        For(ll, i, 1, n){
            if(a[i] % 2 == 0){
                res ++;
                if(a[i] < max_odd){
                    a[i] = max_odd + a[i];
                }
                else if(a[i] > max_odd){
                    res++;
                    max_odd += a[i];
                    a[i] = max_odd + a[i];
                }
                max_odd = max(a[i], max_odd);
            }
        }
        // cout << res << " " << res_2 <<  endl;
        cout << min(res, res_2) << endl;
    }
}
