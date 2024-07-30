#include<iostream>
#include<algorithm>
using namespace std;
typedef long long ll;
#define For(type, i, a, b) for (type i = (a); i <= (b); ++i)
#define endl '\n'

ll test;
ll n;
const ll limit = 5e4 + 10;
ll a[limit];

int main(){
    cin >> test;
    while(test--){
        cin >> n;
        For(ll, i, 1, n)
            cin >> a[i];
        ll res = 1e10;
        For(ll, i, 1, n - 1){
            res = min(res, max(a[i], a[i + 1]));
        }
        cout << res - 1 << endl;
    }
}
