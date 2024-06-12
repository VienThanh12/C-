#include<iostream>
#include<algorithm>
using namespace std;
typedef long long ll;

ll res = 0, ans = 0;
ll test;
ll n, m;
const ll limit = 3 * 1e5 + 5;
ll a[limit];
ll b[limit];

// a[i] la hang
// b[i] la cot
int main(){
    cin >> test;
    while(test--){
        cin >> n >> m;
        ll ans = 0, res = 0;
        ll u = 0, v = 0;
        for(ll i = 1; i <= n; i++)
            a[i] = 0;
        for(ll i = 1; i <= m; i++)
            b[i] = 0;
        for(ll i = 1; i <= n; i++){
            string t;
            cin >> t;
            for(ll j = 0; j < t.length(); j++){
                if(t[j] == '#'){
                    a[i] ++;
                    b[j + 1] ++;
                }
            }
        }
        for(ll i = 1; i <= n; i++)  
            u = max(u, a[i]);
        for(ll i = 1; i <= m; i++)
            v = max(v, b[i]);

        for(ll i = 1; i <= n; i++){
            if(a[i] == u){
                cout << i << " ";
                break;
            }
        }
        for(ll i = 1; i <= m; i++){
            if(b[i] == v){
                cout << i << endl;
                break;
            }
        }
    }
}
