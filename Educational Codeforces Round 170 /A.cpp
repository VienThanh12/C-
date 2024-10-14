#include <iostream>
#include<algorithm>
using namespace std;
typedef long long ll;
#define For(type, i, a, b) for (type i = (a); i <= (b); ++i)
#define endl '\n'
#define YES cout << "YES\n"
#define NO cout << "NO\n"

ll ans = 0, res = 0, temp = 0;
ll n, cnt = 0;
string s, t;

string u, v;

void solve() {
	cin >> s >> t;
    if(s.length() > t.length())
        swap(s,t);
    
    ll pos = 0;
    res = 0;
    while(s[pos] == t[pos] && pos < t.length() && pos < s.length()){
        pos++;
        res++;
    }
    if(pos > 0) res++;
    cout << s.length() + t.length() - 2 * pos + res << endl;
}
 
int main() {
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	int tt; cin >> tt; for (int i = 1; i <= tt; i++) {solve();}
}