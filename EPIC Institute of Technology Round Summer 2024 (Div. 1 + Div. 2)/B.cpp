#include<iostream>
#include<algorithm>
using namespace std;
typedef long long ll;
#define For(type, i, a, b) for (type i = (a); i <= (b); ++i)
#define endl '\n'

ll res;
ll test;
ll n;
const ll limit = 1e5 + 10;
ll a[limit], b[limit];


int main(){
    cin >> test;
    while(test--){
        cin >> n;
        For(ll, i, 1, n)
            cin >> a[i];
        res = 0;
        ll cnt = 0;

        for(ll i = 2; i <= n; i++){
            if(a[i - 1] > a[i]){
                cnt ++;
                b[cnt] = a[i - 1] - a[i];
                a[i] = a[i - 1];
            }
        }
        sort(b + 1, b + 1 + cnt);
        
        ll temp = 0;
        res = 0;
        For(ll, i, 1, cnt){
            // cout << temp << " ";
            b[i] -= temp;
            temp += b[i];
            res += b[i] * (cnt - i + 2);
            // cout << b[i] <<" ";
            b[i] = 0;
        }
        cout << res << endl;
    }
}
