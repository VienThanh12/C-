#include <iostream>
#include<algorithm>
using namespace std;

typedef long long ll;
#define For(type, i, a, b) for (type i = (a); i <= (b); ++i)
#define endl '\n'

ll x, y;

void solve() {
    cin >> x >> y;
    ll ans = 0;
    while(1){
        if(x <= 0 && y <= 0){
            break;
        }
        ans ++;
        if(y == 1){
            y -= 1;
            x -= 11;
        }
        else if(y <= 0){
            x -= 15;
        }
        else if(y >= 2) {
            y -= 2;
            x -= 7;
        }
    }
    cout << ans << endl;
}
 
int main() {
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	int tt; cin >> tt; for (int i = 1; i <= tt; i++) {solve();}
}