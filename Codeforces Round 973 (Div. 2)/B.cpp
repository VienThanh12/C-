#include <iostream>
#include<algorithm>
using namespace std;

typedef long long ll;
#define For(type, i, a, b) for (type i = (a); i <= (b); ++i)
#define endl '\n'
 
const ll limit = 2e5 + 10;

ll a[limit];
ll n;
ll res = 0;

void solve() {
	cin >> n;
    For(ll, i, 1, n)
        cin >> a[i];

    ll sum = 0;
    For(ll, i, 1, n - 2){
        sum += a[i];
    }
    a[n - 1] = a[n - 1] - sum;
    cout << a[n] - a[n - 1] << endl;
}
 
int main() {
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	int tt; cin >> tt; for (int i = 1; i <= tt; i++) {solve();}
}