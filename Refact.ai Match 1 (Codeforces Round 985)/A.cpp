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
ll l, r, k;

void solve() {
	cin >> l >> r >> k;
    res = l - 1;

    ll first = l, second = r;
    while(first <= second){
        ll mid = (first + second) / 2;
        if(mid * k <= r){
            res = max(res, mid);
            first = mid + 1;
        }
        else{
            second = mid - 1;
        }
    }
    cout << res - l + 1 << endl;
}
 
int main() {
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	int tt; cin >> tt; for (int i = 1; i <= tt; i++) {solve();}
}