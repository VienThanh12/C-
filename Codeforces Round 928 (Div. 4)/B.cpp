#include <iostream>
#include<algorithm>
using namespace std;
typedef long long ll;
#define For(type, i, a, b) for (type i = (a); i <= (b); ++i)
#define endl '\n'
#define YES cout << "YES\n"
#define NO cout << "NO\n"

ll n;
string s;

void solve() {
	cin >> n;
    string res = "TRIANGLE";
    ll max_1 = 0;
    For(ll, i, 1, n){
        ll cnt_1 = 0;
        cin >> s;
        For(ll, i, 0, s.length() - 1){
            if(s[i] == '1')
                cnt_1 ++;
        }

        if(max_1 != 0 && cnt_1 == max_1){
            res = "SQUARE";
        }
        max_1 = max(max_1, cnt_1);
    }
    cout << res << endl;
}
 
int main() {
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	int tt; cin >> tt; for (int i = 1; i <= tt; i++) {solve();}
}