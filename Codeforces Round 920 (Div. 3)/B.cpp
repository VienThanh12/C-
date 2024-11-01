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

void solve() {
	cin >> n;
	string s, t;
    cin >> s;
    cin >> t;
    res = 0;

    ll need_to_place = 0;
    ll need_to_remove = 0;
    For(ll, i, 0, s.length() - 1){
        if(s[i] == '1' && t[i] == '0'){
            need_to_remove++;
        }
        if(s[i] == '0' && t[i] == '1'){
            need_to_place++;
        }
    }
    cout << max(need_to_place, need_to_remove) << endl;
}
 
int main() {
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	int tt; cin >> tt; for (int i = 1; i <= tt; i++) {solve();}
}