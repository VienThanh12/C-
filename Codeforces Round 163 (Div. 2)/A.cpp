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
    cin >> s;
    res = 0;

    For(ll, i, 1, s.length() - 1){
        if(s[i] == s[i - 1]){
            res++;
        }
    }
    cout << res;
	
}
 
int main() {
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	{solve();}
}