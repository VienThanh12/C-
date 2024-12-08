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
        ll x = 0;
        char temp = 0;
        ll max_pos = s[i] - 48;
        For(ll, j, i + 1, i + 10){
            if((s[j] - 48 - j + i) > max_pos){
                x = j;
                temp = s[j] - j + i;
                max_pos = s[j] - j + i - 48;
            }
        }
        if(x != 0){
            for(ll j = x; j > i; j--){
                swap(s[j], s[j - 1]);
            }
            s[i] = temp;
        }
    }
    cout << s << endl;
}
 
int main() {
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	int tt; cin >> tt; for (int i = 1; i <= tt; i++) {solve();}
}