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
    For(ll, i, 1, n - 2){
        if(s[i - 1] == 'p' && s[i] == 'i' && s[i + 1] == 'e'){
            i += 2;
            res++;
        }
        else if(s[i - 1] == 'm' && s[i] == 'a' && s[i + 1] == 'p'){
            i += 2;
            res++;
        }
        else if(s[i] == 'p' && i >= 2){
            if(s[i - 2] == 'm' && s[i - 1] == 'a' && s[i + 1] == 'i' && s[i + 2] == 'e'){
                res ++;
                i += 3;
            }
        }
    }    
    cout << res << endl;
}
 
int main() {
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	int tt; cin >> tt; for (int i = 1; i <= tt; i++) {solve();}
}