#include <iostream>
#include<algorithm>
using namespace std;

typedef long long ll;
#define For(type, i, a, b) for (type i = (a); i <= (b); ++i)
#define endl '\n'
 
const ll limit = 2e5 + 10;

ll a[limit];
ll n, k;
ll res;
void solve() {
	cin >> n >> k; 
    For(ll, i, 1, n)
        cin >> a[i];

    sort(a + 1, a + 1 + n);
    res = 0;
    for(ll i = n; i >= 1; i -= 2){
        if(i == 1){
            res += a[i];
            continue;
        }
        ll temp = min(k, a[i] - a[i - 1]);
        if(k > 0){
            k -= temp;
            a[i - 1] += temp;
        }
        res += a[i] - a[i - 1];
    }

    cout << res << endl;

}
 
int main() {
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	int tt; cin >> tt; for (int i = 1; i <= tt; i++) {solve();}
}