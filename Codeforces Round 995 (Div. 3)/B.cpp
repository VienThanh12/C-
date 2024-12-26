#include <iostream>
#include<algorithm>
using namespace std;
typedef long long ll;
#define For(type, i, a, b) for (type i = (a); i <= (b); ++i)
#define endl '\n'
#define YES cout << "YES\n"
#define NO cout << "NO\n"

ll ans = 0, res = 0, temp = 0;
ll n, a, b, c;

void solve() {
	cin >> n >> a >> b >> c;

    ll temp = n / (a + b + c);
    ans = temp * (a + b + c);
    if(ans == n){
        cout << temp * 3 << endl;
    }
    else {
        ans += a;
        if(ans >= n){
            cout << temp * 3 + 1 << endl;
            return;
        }
        ans += b;
        if(ans >= n){
            cout << temp * 3 + 2 << endl;
            return;
        }
        a += c;
        if(ans >= n){
            cout << temp * 3 + 3 << endl;
            return;
        }
    }

}
 
int main() {
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	int tt; cin >> tt; for (int i = 1; i <= tt; i++) {solve();}
}