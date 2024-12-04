#include <iostream>
#include<algorithm>
using namespace std;
typedef long long ll;
#define For(type, i, a, b) for (type i = (a); i <= (b); ++i)
#define endl '\n'
#define YES cout << "YES\n"
#define NO cout << "NO\n"

ll ans = 0, res = 0, temp = 0;
ll n;

const ll limit = 1e3 + 10;

ll a[limit];

void solve() {
	cin >> n;
    For(ll, i, 1, n)
        cin >> a[i];

    res = 1;
    ll sum = 0, cnt = 0;
    For(ll, i, 2, n){
        sum += a[i];
        while(sum >= cnt * 8){
            if(sum == cnt * 8){
                res++;
            }
            sum -= cnt * 8;
            cnt ++;
        }
    }  
    cout << res << endl;
}
 
int main() {
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	int tt; cin >> tt; for (int i = 1; i <= tt; i++) {solve();}
}