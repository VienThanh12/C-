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


void solve() {
    cin >> s;
    n = s.length();
    for(ll i = 0; i < n - 2; i++){
        if(s[i] != s[i + 1] && s[i + 1] != s[i + 2] && s[i] != s[i + 2]){
            cout << s[i] << s[i + 1] << s[i + 2] << endl;
            return;
        }
    }
    for(ll i = 0; i < n - 1; i++){
         if(s[i] == s[i + 1]){
            cout << s[i] << s[i + 1] << endl;
            return;
        }
    }

    cout << -1 << endl;
    return;
}
 
int main() {
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	int tt; cin >> tt; for (int i = 1; i <= tt; i++) {solve();}
}