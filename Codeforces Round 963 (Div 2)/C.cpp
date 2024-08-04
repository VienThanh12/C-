#include<iostream>
#include<algorithm>
using namespace std;
typedef long long ll;
#define For(type, i, a, b) for (type i = (a); i <= (b); ++i)
#define endl '\n'

ll res;
ll test;
ll n, k;

const ll limit = 2e5 + 10;
ll a[limit];

bool check(ll x, ll u){
    if((((x - u) / k ) % 2) == 0) return true;
    return false;
}
int main(){
    cin >> test;
    while(test--){
        cin >> n >> k;
        res = -1;
        For(ll, i, 1, n)
            cin >> a[i];
        
        For(ll, i, 1, 100){
            bool ok = true;
            For(ll, j, 1, n){
                if(check(i, a[j]) == false || i < a[j])
                    ok = false;
            }
            if(ok) {
                res = i;
                break;
            }
        }
        cout << res << endl;
    }
}
