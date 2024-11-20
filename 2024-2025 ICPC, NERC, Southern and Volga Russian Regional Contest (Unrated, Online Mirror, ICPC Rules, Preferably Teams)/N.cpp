#include <iostream>
#include<algorithm>
using namespace std;
typedef long long ll;
#define For(type, i, a, b) for (type i = (a); i <= (b); ++i)
#define endl '\n'
#define YES cout << "YES\n"
#define NO cout << "NO\n"

ll ans = 0, res = 0, temp = 0;
string s;

void solve() {
	cin >> s;
    ll x = s[0] - 48;
    ll y = s[2] - 48;
    if(x < y){
        cout << x << '<' << y << endl;
    }
    else if(x > y){
        cout << x << '>' << y << endl; 
    }
    else{
        cout << x << '=' << y << endl;
    } 
}
 
int main() {
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	int tt; cin >> tt; for (int i = 1; i <= tt; i++) {solve();}
}