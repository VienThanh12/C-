#include <iostream>
#include<algorithm>
using namespace std;

typedef long long ll;
#define For(type, i, a, b) for (type i = (a); i <= (b); ++i)
#define endl '\n'
 
ll cal(ll x, ll y) {
    return y * (y + 1) / 2 - x * (x - 1) / 2;
}
void solve() {
    ll l, r;
    cin >> l >> r;
    ll first = 0, second = 1e9, mid;
    ll lim = r - l;
    ll res = 0;
    while(first <= second){
        mid = (first + second) / 2;
        ll temp = cal(0, mid);
        if(temp <= lim){
            res = max(res, mid);
            first = mid + 1;
        }
        else{
            second = mid - 1;
        }
    }
	cout << res + 1 << endl;
}
 
int main() {
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	int tt; cin >> tt; for (int i = 1; i <= tt; i++) {solve();}
}