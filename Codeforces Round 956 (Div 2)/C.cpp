#include<iostream>
#include<algorithm>
using namespace std;
typedef long long ll;
#define For(type, i, a, b) for (type i = (a); i <= (b); ++i)
#define endl '\n'

ll res = 0;
ll test;
ll n;

const ll limit = 2e5 + 10;
ll a[limit], b[limit], c[limit];
ll dp_1[limit], dp_2[limit], dp_3[limit];

ll division_cell(ll x, ll y){
    ll q = x / y;
    if(q * y < x) q ++;
    return q;
}

int main(){
    cin >> test;
    while(test--){
        cin >> n;

        ll sum = 0;
        For(ll, i, 1, n){
            cin >> a[i];
            dp_1[i] = dp_1[i - 1] + a[i];
            sum += a[i];
        }
        For(ll, i, 1, n){
            cin >> b[i];
            dp_2[i] = dp_2[i - 1] + b[i];
        }
        For(ll, i, 1, n){
            cin >> c[i];
            dp_3[i] = dp_3[i - 1] + c[i];
        }
        bool ok = false;
        ll kd = division_cell(sum, 3);

        ll u_1, v_1;
        ll u_2, v_2;
        ll u_3, v_3;

        For(ll, i, 1, n){
            if(dp_1[i] >= kd){
                u_1 = i;
                break;
            }
        }

        For(ll, i, 1, n){
            if(dp_2[i] >= kd){
                u_2 = i;
                break;
            }
        }
        For(ll, i, 1, n){
            if(dp_3[i] >= kd){
                u_3 = i;
                break;
            }
        }
        for(ll i = n; i >= 1; i --){
            //cout << dp_3[n] - dp_3[i - 1] << endl;
            if(dp_3[n] - dp_3[i - 1] >= kd){
                v_3 = i;
                break;
            }
        }
        for(ll i = n; i >= 1; i --){
            //cout << dp_3[n] - dp_3[i - 1] << endl;
            if(dp_2[n] - dp_2[i - 1] >= kd){
                v_2 = i;
                break;
            }
        }
        for(ll i = n; i >= 1; i --){
            //cout << dp_3[n] - dp_3[i - 1] << endl;
            if(dp_1[n] - dp_1[i - 1] >= kd){
                v_1 = i;
                break;
            }
        }

        // cout << kd << endl;
        // cout << u << " " << v << endl;

        // cout << u_1 << " " << v_1 << endl;
        // cout << u_2 << " " << v_2 << endl;
        // cout << u_3 << " " << v_3 << endl;
        if(u_1 < v_3 && dp_2[v_3 - 1] - dp_2[u_1] >= kd){
            cout << 1 << " " << u_1  << " " << u_1 + 1 << " " << v_3 - 1 << " " << v_3 << " " << n << endl; 
            continue;
        }
        if(u_2 < v_3 && dp_1[v_3 - 1] - dp_1[u_2] >= kd){
            cout << u_2 + 1 << " " << v_3 - 1 << " " << 1 << " " << u_2 << " " << v_3 << " " << n << endl;
            continue;
        }
        if(u_3 < v_2 && dp_2[v_2 - 1] - dp_2[u_3] >= kd){
            cout << u_3 + 1 << " " << v_2 - 1 << " " << v_2 << " " << n << " " << 1 << " " << u_2 << endl;
            continue;
        }
        if(u_1 < v_2 && dp_3[v_2 - 1] - dp_3[u_1] >= kd){
            cout << 1  << " " << u_1 << " " << v_2 << " " << n << " " << u_1 + 1 << " " << v_2 - 1 << endl;
            continue;
        }
        if(u_3 < v_1 && dp_2[v_1 - 1] - dp_2[u_3] >= kd){
            cout << v_1 << " " << n << " " << u_3 + 1 <<" " << v_1 - 1 << " " << 1 << " " << u_3 << endl;
            continue;
        }
        if(u_2 < v_1 && dp_3[v_1 - 1] - dp_3[u_2] >= kd){
            cout << v_1 << " " << n << " " <<1  << " "  << u_2 << " " << u_2 + 1 << " " << v_1 - 1 << endl; 
            continue;
        }
        cout << -1 << endl;
    }
}
