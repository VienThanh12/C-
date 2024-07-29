#include<iostream>
#include<algorithm>
using namespace std;
typedef long long ll;
#define For(type, i, a, b) for (type i = (a); i <= (b); ++i)
#define endl '\n'

ll res = 0;
ll test;
ll n;
const ll limit = 1e3 + 10;
ll a[limit];

int main(){
    cin >> test;
    while(test--){
        cin >> n;
        For(ll, i, 1, n)
            cin >> a[i];
        res = 0;
        for(ll i = 1; i <= n; i += 2)
            res = max(res, a[i]);
        cout << res << endl;
    }
}
