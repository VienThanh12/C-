#include<iostream>
#include<algorithm>
using namespace std;
typedef long long ll;
#define For(type, i, a, b) for (type i = (a); i <= (b); ++i)
#define endl '\n'

ll test;
ll n;
ll k;
const ll limit = 1e3 + 10;

ll a[limit][limit];
char s;
int main(){
    cin >> test;
    while(test--){
        cin >> n >> k;
        For(ll, i, 1, n){
            For(ll, j, 1, n){
                cin >> s;
                a[i][j] = int(s - 48);
            }
        }
        for(ll i = 1; i <= n; i += k){
            for(ll j = 1; j <= n; j += k){
                cout << a[i][j];
            }
            cout << endl;
        }
    }
}
