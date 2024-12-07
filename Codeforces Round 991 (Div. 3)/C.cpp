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
string s;
ll x, y;

void solve() {
    cin >> s;
    ll sum = 0, x = 0, y = 0;
    For(ll, i, 0, s.length() - 1){
        if(s[i] == '2') x++;
        if(s[i] == '3') y++;
        sum += s[i] - 48;
    }
    // cout << sum << endl;
    // cout << x <<" " << y << endl;
    For(ll, i, 0, min(ll(20), x)){
        For(ll, j, 0, min(ll(20), y)){
            if((sum + i * 2 + j * 6) % 9 == 0){
                // cout << i <<" " << j << endl;
                cout <<"YES" << endl;
                return;
            }
        }
    }
    cout << "NO" << endl;
}
 
int main() {
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	int tt; cin >> tt; for (int i = 1; i <= tt; i++) {solve();}
}