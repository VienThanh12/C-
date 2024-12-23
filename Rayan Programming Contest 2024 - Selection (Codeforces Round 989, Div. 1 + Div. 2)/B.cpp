#include <iostream>
#include<algorithm>
using namespace std;
typedef long long ll;
#define For(type, i, a, b) for (type i = (a); i <= (b); ++i)
#define endl '\n'
#define YES cout << "YES\n"
#define NO cout << "NO\n"

ll ans = 0, res = 0, temp = 0;
ll n, m, k;
string s;

void solve() {
	cin >> n >> m >> k;
    cin >> s;

    ll cnt = 0;
    res = 0;

    For(ll, i, 0, m - 2){
        if(s[i] == '1'){
            cnt++;
        }
    }
    // cout << cnt << endl;
    For(ll, i, m - 1, s.length() - 1){
        if(s[i] == '1'){
            cnt++;
        }
        // cout << cnt <<" ";
        if(cnt == 0){
            res++;
            For(ll, j, i, i + k - 1){
                if(j <= s.length() - 1){
                    s[j] = '1';
                }
            }
            cnt++;
        }
        if(s[i - m + 1] == '1'){
            cnt--;
        }
        // cout << cnt << endl;
    }
    cout << res << endl;
}
 
int main() {
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	int tt; cin >> tt; for (int i = 1; i <= tt; i++) {solve();}
}