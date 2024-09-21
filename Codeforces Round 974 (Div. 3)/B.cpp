#include <iostream>
#include<algorithm>
using namespace std;

typedef long long ll;
#define For(type, i, a, b) for (type i = (a); i <= (b); ++i)
#define endl '\n'
 
ll n, k;

ll cal(ll x, ll y){
    ll ssh = y - x + 1;
    return (x + y) * ssh / 2;
}
void solve() {
	cin >> n >> k;
    
    ll sum = cal(n - k + 1 , n);
    sum % 2 == 0 ? cout << "YES" << endl : cout << "NO" << endl;
}
 
int main() {
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	int tt; cin >> tt; for (int i = 1; i <= tt; i++) {solve();}
}