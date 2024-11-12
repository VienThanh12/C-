#include <iostream>
#include<algorithm>
using namespace std;
typedef long long ll;
#define For(type, i, a, b) for (type i = (a); i <= (b); ++i)
#define endl '\n'
#define YES cout << "YES\n"
#define NO cout << "NO\n"

ll ans = 0, res = 0, temp = 0;
ll n, a, b;
string s;
void solve() {
    cin >> n >> a >> b;

    cin >> s;
    ll x = 0, y = 0;
    
    For(ll, j, 1, 1000){
        For(ll, i, 0, s.length() - 1){
            if(s[i] == 'N'){
                y ++;
            }
            if(s[i] == 'E'){
                x++;
            }
            if(s[i] == 'S'){    
                y --;
            }
            if(s[i] == 'W'){
                x--;
            }
            // cout << x << ' ' << y << endl;
            if(x == a && y == b){
            cout << "YES" << endl;
            return;
        }
        }
    }
    cout <<"NO" << endl;
}
 
int main() {
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	int tt; cin >> tt; for (int i = 1; i <= tt; i++) {solve();}
}