#include <iostream>
#include<algorithm>
#include<vector>
using namespace std;
typedef long long ll;
#define For(type, i, a, b) for (type i = (a); i <= (b); ++i)
#define endl '\n'
#define YES cout << "YES\n"
#define NO cout << "NO\n"

ll ans = 0, res = 0, temp = 0;
ll n;

ll b[200];

void solve() {
    cin >> n;
    ll a, x;
    ll limit_up = 0;
    ll limit_down = 1e10;
    ll kd = 0;
    while(n -- ){
        cin >> a >> x;
        if(a == 1){
            limit_up = max(limit_up, x);
        }
        if(a == 2){
            limit_down = min(limit_down, x);
        }
        if(a == 3){
            kd ++;
            b[kd] = x;
        }
    }
    if(limit_down < limit_up){
        cout << 0 << endl;
        return;
    }
    res = limit_down - limit_up + 1;
    For(ll, i, 1, kd){
        if(b[i] <= limit_down && b[i] >= limit_up)
            res--;
        b[i] = 0;
    }
    cout << res << endl;
}
 
int main() {
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	int tt; cin >> tt; for (int i = 1; i <= tt; i++) {solve();}
}