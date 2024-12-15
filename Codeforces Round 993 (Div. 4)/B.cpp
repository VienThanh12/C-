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

	For(ll, i, 0, s.length() - 1){
        if(s[i] == 'q'){
            s[i] = 'p';
        }
        else if(s[i] == 'p'){
            s[i] = 'q';
        }
    }
    ll k = s.length() - 1;
    For(ll, i, 0, (s.length() - 1) / 2){
        swap(s[i], s[k]);
        k --; 
    }
    cout << s << endl;
}
 
int main() {
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	int tt; cin >> tt; for (int i = 1; i <= tt; i++) {solve();}
}