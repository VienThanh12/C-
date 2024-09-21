#include <iostream>
#include<algorithm>
using namespace std;

typedef long long ll;
#define For(type, i, a, b) for (type i = (a); i <= (b); ++i)
#define endl '\n'
 
const ll limit = 200;

ll a[limit];
ll n, k;

void solve() {
	cin >> n >> k;
    For(ll, i, 1, n)
        cin >> a[i];
    
    ll robin_gold = 0, res = 0;
    For(ll, i, 1, n){
        if(a[i] >= k){
            robin_gold += a[i];
            continue;
        }
        
        if(a[i] == 0 && robin_gold > 0){
            robin_gold --;
            res ++;
        }
    }
    cout << res << endl;
}
 
int main() {
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	int tt; cin >> tt; for (int i = 1; i <= tt; i++) {solve();}
}