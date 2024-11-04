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
    ll cnt = 0;
    For(ll, i, 0, s.length() - 1){
        if(s[i] == '1' && s[i + 1] == '1' && s[i + 2] == '0' && s[i + 3] == '0'){
            cnt++;
        }
    }
    ll x, v;

    cin >> n;

    For(ll, i, 1, n){
        cin >> x >> v;
        ll cnt_1 = 0;
        for(ll j = max(x - 4, ll(0)); j <= min(x + 4, ll(s.length() - 1)); j ++){
            if(s[j] == '1' && s[j + 1] == '1' && s[j + 2] == '0' && s[j + 3] == '0'){
                cnt_1 --;
                // cout << j << endl;
            }
        }
        s[x - 1] = char(v + 48);
        // cout << s << endl;
        for(ll j = max(x - 4, ll(0)); j <= min(x + 4, ll(s.length() - 1)); j ++){
            if(s[j] == '1' && s[j + 1] == '1' && s[j + 2] == '0' && s[j + 3] == '0'){
                cnt_1 ++;
                // cout << j << endl;
            }
        }
        cnt += cnt_1;
        cnt > 0 ? cout <<"YES" << endl : cout << "NO" << endl;
        // else if(v == 0){
        //     ll cnt_1 = 0;
        //     for(ll j = min(i - 3, ll(0)); j <= max(i + 3, ll(s.length() - 1)); j ++){
        //         if(s[j] == '1' && s[j + 1] == '1' && s[j + 2] == '0' && s[j + 3] == '0'){
        //             cnt_1 --;
        //         }
        //     }
        //     s[x - 1] = char(v);
        //     for(ll j = min(i - 3, ll(0)); j <= max(i + 3, ll(s.length() - 1)); j ++){
        //         if(s[j] == '1' && s[j + 1] == '1' && s[j + 2] == '0' && s[j + 3] == '0'){
        //             cnt_1 ++;
        //         }
        //     }
        //     res += cnt_1;
        //     res > 0 ? cout <<"YES" << endl : cout << "NO" << endl;
        // }
    }
}
 
int main() {
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	int tt; cin >> tt; for (int i = 1; i <= tt; i++) {solve();}
}