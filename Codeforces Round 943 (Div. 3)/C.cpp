#include <iostream>
#include<algorithm>
using namespace std;

typedef long long ll;
#define For(type, i, a, b) for (type i = (a); i <= (b); ++i)
#define endl '\n'
 
ll n;
const ll limit = 1e3 + 10;
ll a[limit];

void solve() {
	cin >> n;
    For(ll, i, 1, n - 1)
        cin >> a[i];
    
    ll base_num = 501;
    cout << base_num <<" "; 
    For(ll, i, 1, n - 1){
        base_num += a[i];
        cout << base_num <<" ";
    }
    cout << endl;
}
 
int main() {
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	int tt; cin >> tt; for (int i = 1; i <= tt; i++) {solve();}
}