#include<iostream>
#include<algorithm>
using namespace std;
typedef long long ll;
#define For(type, i, a, b) for (type i = (a); i <= (b); ++i)
#define endl '\n'

const ll limit = 2e5 + 10;

ll res = 0;
ll test;
ll n, k;

ll a[limit];

int main(){
    cin >> test;
    while(test--){
        cin >> n >> k;
        For(ll, i, 1, k){
            a[i] = 0;
        }
        For(ll, i, 1, k){
            cin >> a[i];
        }
        sort(a + 1, a + 1 + k);
        ll res = 0;

        For(ll, i, 1, k - 1){
            res += a[i] + a[i] - 1;
        }
        cout << res << endl;
    }
}
