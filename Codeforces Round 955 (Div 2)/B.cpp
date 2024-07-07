#include<iostream>
#include<algorithm>
using namespace std;
typedef long long ll;
#define For(type, i, a, b) for (type i = (a); i <= (b); ++i)
#define endl '\n'

ll res = 0;
ll test;
ll n;
ll x, y, k;

int main(){
    cin >> test;
    while(test--){
        cin >> x >> y >> k;
        
        while(k){
            ll u = min(k, y - x % y);
            k -= u;
            x += u;
            while(x % y == 0){
                x /= y;
            }
            if(x == 1) break;
        }
        k %= (y - 1);
        x += k;
        if(x == y) x = 1;
        cout << x << endl;   
    }
}
