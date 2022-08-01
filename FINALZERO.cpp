#include <bits/stdc++.h>
#define fi first
#define se second
#define For(type, i, a, b) for (type i = (a); i <= (b); ++i)
#define Ford(type, i, a, b) for (type i = (a); i >= (b); --i)
#define Rep(type, i, a, b) for (type i = (a); i < (b); ++i)
#define Repd(type, i, a, b) for(type i = (a); i > (b); --i)
#define endl '\n'
using namespace std;

typedef long long ll;

const ll maxN = 1e18;
const ll minN = -1e18;
const ll MOD = 1e9 + 7;

const ll limit = 1e3 + 5;
const ll limit1 = 1e4 + 5;
const ll limit2 = 2e5 + 5;
const ll limit3 = 1e6 + 5;

ll test;
ll n, m, k, x, y, u, v;
ll res = 0, sum = 0, ans = 0, kd, hkd, answer;
bool ok = false;
ll a[limit3];
pair<ll, ll> b[limit3];
ll c[limit3];

ll out(ll n){
    sum = 1;
    ans = 0;
    ll five_ = 0, two_ = 0;
   // cout << 1 << endl;
    For(ll, i, 1, n){
        if(c[i] == 0){
            ans++;
            ll x = a[i];
            while(x % 5 == 0){
                five_++;
                x /= 5;
            }
            x = a[i];
            while(x % 2 == 0){
                two_++;
                x /= 2;
            }
        }
    }
    if(ans == k){
  //      cout << two_ <<" " << five_ << endl;
       // cout << sum << " " << CountZero(sum) << endl;
        res = max(res, min(five_, two_));
    }
}
ll NP(ll i)
{
    ll z;
    for(z=0;z<=1;z++)
    {
        c[i] = z;
        if(i == n) out(n);
        else NP(i+1);
    }
}

void FastIn(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
}
void ReadIn(){
    cin >> n >> k;
    For(ll, i, 1, n)
        cin >> a[i];

    if(n <= 6){
        res = 0;
        NP(1);
        cout << res;
        return;
    }


    For(ll, i, 1, n){
        x = a[i];
        while(x % 5 == 0){
            b[i].fi++;
            x /= 5;
        }
        while(x % 2 == 0){
            b[i].se++;
            x /= 2;
        }
    }

    sort(b + 1, b + 1 + n);

    for(ll i = n; i >= n - k + 1; i--){
        res += b[i].fi;
        ans += b[i].se;
    }
    cout << min(res, ans);
}
int main(){
    FastIn();
    ReadIn();
}

