#include <iostream>
#include<algorithm>
using namespace std;

typedef long long ll;
#define For(type, i, a, b) for (type i = (a); i <= (b); ++i)
#define endl '\n'
 
ll n;
const ll limit = 2e3 + 10;
ll a[limit];

void solve() {
	cin >> n;
    For(ll, i, 1, n)
        cin >> a[i];
    
    ll maxOdd = 0, maxEven = 0;
    ll cntOdd = 0, cntEven = 0;
    For(ll, i, 1, n){
        i % 2 == 0 ? cntEven ++ : cntOdd++;
        i % 2 == 0 ? maxEven = max(maxEven, a[i]) : maxOdd = max(maxOdd, a[i]);
    }
    cout << max(maxOdd + cntOdd, maxEven + cntEven) << endl;
}
 
int main() {
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	int tt; cin >> tt; for (int i = 1; i <= tt; i++) {solve();}
}