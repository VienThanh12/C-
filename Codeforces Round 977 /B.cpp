#include <iostream>
#include<algorithm>
#include<map>
using namespace std;
typedef long long ll;
#define For(type, i, a, b) for (type i = (a); i <= (b); ++i)
#define endl '\n'
#define YES cout << "YES\n"
#define NO cout << "NO\n"

ll ans = 0, res = 0, temp = 0;
ll n, x;
const ll limit = 2e5 + 10;

ll a[limit];

map<ll, ll> cnt, pos;


void solve() {
	cin >> n >> x;
    For(ll, i, 1, n) {
        cin >> a[i]; 
        cnt[a[i]]++;
    }
    
    ll count = 0;
    while(true){
        pos[count % x] += cnt[count];
        if(!pos[count % x]){
            cout << count << endl;
            break;
        }
        pos[count % x] -- ;
        count ++;
    }
    For(ll, i, 1, n){
        cnt[a[i]] = 0;
        pos[a[i]] = 0;
    }

}
 
int main() {
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	int tt; cin >> tt; for (int i = 1; i <= tt; i++) {solve();}
}