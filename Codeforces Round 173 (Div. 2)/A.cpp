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

	cin >> n;

    res = 0;
    For(ll, i, 1, n){
        cin >> s;
        if(s[1] == '+') res++;
        else res--;
    }
    cout << res;

}
 
int main() {
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	solve();

}