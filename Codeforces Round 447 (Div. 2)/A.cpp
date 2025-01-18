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
    res = 0;
    if(s.length() < 3){
        cout << 0;
        return;
    }
    For(ll, i, 0, s.length() - 3){
        For(ll, j, i + 1, s.length() - 2){
            For(ll, k, j + 1, s.length() - 1){
                if(s[i] == 'Q' && s[j] == 'A' && s[k] == 'Q'){
                    res++;
                }
            }
        }
    }
    cout << res;
}
 
int main() {
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	{solve();}
}