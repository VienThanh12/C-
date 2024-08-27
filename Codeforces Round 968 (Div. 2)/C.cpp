#include <iostream>
#include<algorithm>
using namespace std;

typedef long long ll;
#define For(type, i, a, b) for (type i = (a); i <= (b); ++i)
#define endl '\n'
 
ll n;
string s;
const ll limit = 2e5 + 10;
ll dp[100];

void solve() {
    cin >> n;
    cin >> s;
    s = ' ' + s;

    For(ll, i, 1, s.length() - 1){
        // cout << int(s[i] - 97) <<" ";
        dp[int(s[i] - 97)] += 1;
    }
    string res;
    bool ok = true;
    bool check = 0;

    while(ok){
        check = 0;
        For(ll, i, 0, 25){
            if(dp[i]){
                // cout << check << endl;
                res = res + char(i + 97);
                check = 1;
                dp[i] --;
            }
        }
        if(check == 0) break;
    }
    cout << res << endl;
    For(ll, i, 1, 30)
        dp[i] = 0;
}
 
int main() {
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	int tt; cin >> tt; for (int i = 1; i <= tt; i++) {solve();}
}