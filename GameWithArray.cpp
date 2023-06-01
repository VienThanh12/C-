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
 
const ll limit = 2e5 + 5;
const ll limit1 = 1e6 + 5;
const ll limit2 = 1e3 + 5;
const ll limit3 = 1e4 + 5;
 
ll test;
ll n, k, x, y, u, v;
ll res = 0, sum = 0, ans = 0, kd, hkd, answer;
bool ok = false;
ll a[limit1], b[limit1];
 
void FastIn(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
}
 
void ReadIn(){
    cin >> n >> k;
    if(2 * n > k){
        cout << "NO" << endl;
    }
   if(2 * n <= k){
        cout << "YES" << endl;
        For(ll, i, 1, n - 1)
            cout << 1 << " ";
        ans = n - 1;
        cout  << k - ans << endl;
        cout << n << endl;
   }
}
int main(){
    FastIn();
    ReadIn();
}
