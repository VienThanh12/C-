#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
const ll limit = 1e6 + 5;

ll test, n, k;
ll a, b;
ll u, v;


int main(){
    cin >> a >> b;
    u = a;
    v = b;
    for(ll i = 1; i <= b - 1; i++)
        u *= a;
   // cout << a << endl;
    for(ll i = 1; i <= a - 1; i++)
        v *= b;
 //   cout << b << endl;
    cout << u + v;
}




