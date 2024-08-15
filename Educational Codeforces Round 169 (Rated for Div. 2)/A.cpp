#include <iostream>
#include<algorithm>
using namespace std;

typedef long long ll;
#define For(type, i, a, b) for (type i = (a); i <= (b); ++i)
#define endl '\n'
 
ll n;
const ll limit = 1e3;
ll a[limit];
void solve() {
    cin >> n;
    For(ll, i, 1, n){
        cin >> a[i];
    }
    
    if(n == 2 && abs(a[1] - a[2]) > 1){
        cout <<"YES" << endl;
    }
    else cout <<"NO" << endl;
}
 
int main() {
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	int tt; cin >> tt; for (int i = 1; i <= tt; i++) {solve();}
}