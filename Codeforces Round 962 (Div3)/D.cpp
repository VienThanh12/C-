#include<iostream>
#include<algorithm>
using namespace std;
typedef long long ll;
#define For(type, i, a, b) for (type i = (a); i <= (b); ++i)
#define endl '\n'

ll test;
ll n, x;

int main(){
    cin >> test;
    while(test--){
        cin >> n >> x;
        ll ans = 0;
        For(ll, a, 1, x){
            ll b = min(n / a, x - a);
            For(ll, j, 1, b){
                ll c = min(x - a - j, (n - a * j) / (a + j));
                if(c > 0){
                    ans += c;
                }
            }
        }
        cout << ans << endl;
    }
}
