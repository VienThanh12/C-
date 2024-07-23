#include<iostream>
#include<algorithm>
#include<map>
using namespace std;
typedef long long ll;
#define For(type, i, a, b) for (type i = (a); i <= (b); ++i)
#define endl '\n'

ll test;
ll n, m;
map<ll, ll> cnt;
const ll limit = 2e5 + 10;  
ll a[limit];
ll c[limit]; 
int main(){
    cin >> test;
    while(test--){
        cin >> n >> m;
        For(ll, i, 1, n){
            cin >> a[i];
            cnt[a[i] + 1] = 0;
            cnt[a[i]] = 0;
            cnt[a[i] - 1] = 0;
        }
        For(ll, i, 1, n){
            cin >> c[i];
            cnt[a[i]] = c[i];
        }

        ll res = 0;
        sort(a + 1, a + 1 + n);

        For(ll, i, 1, n){
            ll first = 1, second = cnt[a[i]];
            while(first <= second){
                ll mid = (first + mid) / 2;
                if(a[i] * mid <= m){
                    res = max(res, a[i] * mid);
                    first = mid + 1;
                }
                else second = mid - 1;
            }
            ll base = cnt[a[i]] * a[i];
            if(cnt[a[i] + 1] > 0){
                first = 1;
                second = cnt[a[i] + 1];
                while(first <= second){
                ll mid = (first + mid) / 2;
                if((a[i] + 1) * mid <= m - base){
                    res = max(res, (a[i] + 1) * mid + base);
                    first = mid + 1;
                }
                else second = mid - 1;
            }
            }
            cout << res << endl;
        }
    }
}
