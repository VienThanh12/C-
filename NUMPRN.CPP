#include <bits/stdc++.h>
#define For(type, i, a, b) for (type i = (a); i <= (b); ++i)
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

ll n, m;
ll a[limit3], b[limit3];
ll res = 0;
void FastIn(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
}
/*
bool Check(ll x){
    ll sum = 0;
    For(ll, i, 1, n){
        ll kd = x / (b[i] + 1);
        sum = sum + (x - kd) * a[i];
    }
    if(sum >= m)
        return true;
    return false;
}
*/
void ReadIn(){
    /*
    cin >> n >> m;
    ll res = 1e18;
    For(ll, i, 1, n){
        cin >> a[i] >> b[i];
    }
    ll first = 1, second = 10e15, mid = 0;
    while(first <= second){
        mid = (first + second) / 2;
        if(Check(mid) == true){
            res = min(res, mid);
            second = mid - 1;
        }
        else first = mid + 1;
    }
    cout << res;
    */
    ll test_case;
    cin >> test_case;
    bool ok = false;
    while(test_case--){
        ll x;
        cin >> x;
        ok = false;
        For(ll, i, 1, 1e6){
            //ok = false;
            if(x % i == 0 && x % (i + 1) == 0){
                ok = true;
                cout << i <<" ";
            }
        }
        if(ok == false)
            cout << -1;
        cout << endl;
    }
}
int main(){
    FastIn();
    ReadIn();
}
// 100 / 35
// 2
// (100 - (35*2)) *10 / 35
// 9 010 9
// m / (x)
// m / (x + 1)
