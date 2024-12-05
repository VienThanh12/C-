#include <iostream>
#include<algorithm>
using namespace std;
typedef long long ll;
#define For(type, i, a, b) for (type i = (a); i <= (b); ++i)
#define endl '\n'
#define YES cout << "YES\n"
#define NO cout << "NO\n"

ll ans = 0, res = 0, temp = 0;
ll n, m;
// 0.36 -> 44 = 8p
void solve() {
	cin >> n >> m;
    string s;
    ll sum = 0;
    res = 0;
    bool ok = true;
    For(ll, i, 1, n){
        cin >> s;
        
        if(sum + s.length() <= m && ok == true){
            res ++;
            sum += s.length();
        }
        else {
            ok = false;
        }
    }
    cout << res << endl;
}
 
int main() {
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	int tt; cin >> tt; for (int i = 1; i <= tt; i++) {solve();}
}