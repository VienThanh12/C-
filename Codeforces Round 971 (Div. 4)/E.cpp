#include <iostream>
#include<algorithm>
using namespace std;

typedef long long ll;
#define For(type, i, a, b) for (type i = (a); i <= (b); ++i)
#define endl '\n'

ll n, k;


ll cal(ll x, ll y) {
    return y * (y + 1) / 2 - x * (x - 1) / 2;
}
void solve() {
    cin >> n >> k;
    ll start = k, end = k + n - 1, mid;
    ll diff = 1e18;
    ll res = 1e18;
    ll first = start, second = end;
    while(first <= second){
        mid = (first + second) / 2;
        ll temp = cal(start, mid) - cal(mid + 1, end);
        res = min(res, abs(temp));

        if(temp <= 0){
            first = mid + 1;
        }
        else {
            second = mid - 1;
        }
    }
    cout << res << endl;
}

int main() {
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	int tt; cin >> tt; for (int i = 1; i <= tt; i++) {solve();}
}