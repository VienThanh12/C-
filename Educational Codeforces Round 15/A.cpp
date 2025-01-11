#include <iostream>
#include<algorithm>
using namespace std;
typedef long long ll;
#define For(type, i, a, b) for (type i = (a); i <= (b); ++i)
#define endl '\n'
#define YES cout << "YES\n"
#define NO cout << "NO\n"

ll ans = 0, res = 0, temp = 0;
ll n;
const ll limit = 1e5 + 10;
ll a[limit];

void solve() {
	cin >> n;
	For(ll, i, 1, n)
        cin >> a[i];
    ll cnt = 1, res = 1;
    For(ll, i, 2, n){
        if(a[i - 1] < a[i]){
            cnt ++;
            res = max(res, cnt);
        }
        else cnt = 1;
    }
    cout << res;
}
 
int main() {
	ios::sync_with_stdio(false);
    {solve();}
}