#include <iostream>
#include<algorithm>
using namespace std;

typedef long long ll;
#define For(type, i, a, b) for (type i = (a); i <= (b); ++i)
#define endl '\n'
 
const ll limit = 2e5 + 10;
ll a[limit];
ll res = 0;
ll n;
void solve() {
    cin >> n;
    For(ll, i, 1, n){
        cin >> a[i];
    }
    For(ll, i, 1, n)
        cout << (a[i] % n + 1) <<" ";
    cout << endl;
}
 
int main() {
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	int tt; cin >> tt; for (int i = 1; i <= tt; i++) {solve();}
}