#include <iostream>
#include<algorithm>
using namespace std;

typedef long long ll;
#define For(type, i, a, b) for (type i = (a); i <= (b); ++i)
#define endl '\n'
 
const ll limit = 1e5 + 10;

ll a[limit];
ll n;

ll med(ll a, ll b, ll c){
    if(a > b) swap(a, b);
    if(a > c) swap(a, c);
    if(b > c) swap(b, c);
    return b;
}
void solve() {
	cin >> n;
    For(ll, i, 1, n)
        cin >> a[i];
    ll res = 0;
    if(n == 2){
        cout << min(a[1], a[2]) << endl;
        return;
    }
    For(ll, i, 1, n - 2)
        res = max(res, med(a[i], a[i + 1], a[i + 2]));
    cout << res << endl;
}
 
int main() {
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	int tt; cin >> tt; for (int i = 1; i <= tt; i++) {solve();}
}