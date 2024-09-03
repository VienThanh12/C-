#include <iostream>
#include<algorithm>
using namespace std;

typedef long long ll;
#define For(type, i, a, b) for (type i = (a); i <= (b); ++i)
#define endl '\n'
 
ll n;
ll a, b;

void solve() {
	cin >> a >> b;
    ll res = 1e18;
    For(ll, i, 0, 15){
        if(i >= a && i <= b)
            res = min(res, i - a + b - a);
    }
    cout << res << endl;
}
 
int main() {
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	int tt; cin >> tt; for (int i = 1; i <= tt; i++) {solve();}
}