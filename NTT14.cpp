#include<iostream>
#include<algorithm>
#include<cmath>
using namespace std;
typedef long long ll;
const ll limit = 1e7;

ll res = 1e18, ans = 0;
ll cnt1, cnt2, cnt3;
ll a[limit], x[limit];
ll n;
ll u, q;
bool ok = false;

ll pow(ll a, ll n)
{
    if(n == 1) return a;
    ll tmp = pow(a, n/2);
    return (n & 1) ? tmp * tmp * a : tmp * tmp;
}

ll SolveProblemSub2(){
    ll x = a[n / 2], x1 = a[(n + 1) / 2], x2 = a[(n - 1) / 2];

    for(ll i = 1; i <= n; i++){
        cnt1 += abs(x - a[i]);
    }
    for(ll i = 1; i <= n; i++){
        cnt2 += abs(x1 - a[i]);
    }
    for(ll i = 1; i <= n; i++){
        cnt3 += abs(x2 - a[i]);
    }
    return min(cnt1, min(cnt2, cnt3));
}

ll SolveProblemSub1(){
    u = 1;
    q = 1;
    res = 1e18;
    for(ll u = 1; u <= 170901; u++){

        if(u * q > 170901) break;

        for(ll q = 1; q <= 170901; q++){
            if(u * q > 170901) break;
            
            x[1] = u;
            ok = false;
            ans = 0;

            for(ll i = 2; i <= n; i++){
                x[i] = x[i - 1] * q;
              //  cout << x[i] << endl;
                if(x[i] > 170901 * 30){
                    ok = true;
                    break; 
                }

            }
            if(ok == true) break;

            for(ll i = 1; i <= n; i++){
               // cout << ans << endl;
                ans += abs(a[i] - x[i]);
            }
            res = min(res, ans);  
        //    cout << res << endl;  
        }
    }
    return res;
}

void ReadIn(){
    cin >> n;
    for(ll i = 1; i <= n; i++)
        cin >> a[i];

    sort(a + 1, a + 1 + n);

    if(n > 30) cout << SolveProblemSub2();
    if(n <= 30) cout << SolveProblemSub1();    
}


void FastInOut(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
}
int main(){
    FastInOut();
    ReadIn();
}
    
