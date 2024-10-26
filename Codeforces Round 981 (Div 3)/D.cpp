#include <iostream>
#include<algorithm>
#include<map>
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
map<ll, ll> trace;
void solve() {
	cin >> n;
	For(ll, i, 1, n)
        cin >> a[i];
    ll pos = 0, sum = 0;
    res = 0;
    For(ll, i, 1, n){
        sum += a[i];
        trace[sum]++;
        if(trace[sum] == 2 || sum == 0){
            ll plus = 0;
            res++;
            // cout << i << endl;
            For(ll, j, pos, i){
                plus += a[j];
                trace[plus] = 0;
            }
            pos = i + 1;
            sum = 0;
        }
    }
    sum = 0;
    For(ll, i, pos, n){
        sum += a[i];
        trace[sum] = 0;
    }
    cout << res << endl;
}
 
int main() {
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	int tt; cin >> tt; for (int i = 1; i <= tt; i++) {solve();}
}