#include <iostream>
#include<algorithm>
using namespace std;

typedef long long ll;
#define For(type, i, a, b) for (type i = (a); i <= (b); ++i)
#define endl '\n'
 
ll n;
const ll limit = 2e3 + 10;

ll a[limit], b[limit];

// 8p 
void solve() {
    cin >> n;
    For(ll, i, 1, n)
        cin >> a[i];
    For(ll, i, 1, n)
        cin >> b[i];

    ll res = 0;
    ll cnt = 0;
    for(ll i = n; i >= 1; i--){
        cnt = 0;
        for(ll j = i; j >= 1; j--){
            if(b[i] < a[j]) {
                cnt ++;
            }
            else break;
        }
        res = max(res, cnt);
    }
    cout << res << endl;
}
 
int main() {
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	int tt; cin >> tt; for (int i = 1; i <= tt; i++) {solve();}
}