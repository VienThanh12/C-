#include<iostream>
#include<algorithm>
using namespace std;
typedef long long ll;
#define For(type, i, a, b) for (type i = (a); i <= (b); ++i)
#define endl '\n'

ll test;
ll n, x;
string s;
int main(){
    cin >> test;
    while(test--){
        ll cnt_0 = 0, cnt_1 = 0;
        ll res = 0, ans = 0, real_ans = 0;
        cin >> s;
        if(s[0] == '0') cnt_0 ++;
        if(s[0] == '1') cnt_1 ++;

        For(ll, i, 1, s.length() - 1){
            if(cnt_0 > cnt_1){
                if(s[i] == '1'){
                    if(ans == 0) ans = 1;
                    else ans = ans * 2;
                }
            }
            else if(cnt_0 < cnt_1){
                if(s[i] == '0'){
                    if(ans == 0) ans = 1;
                    else ans = ans * 2;
                }
            }
            else if(cnt_0 == cnt_1){
                if(s[i] != s[i - 1]){
                    if(ans == 0) ans = 1;
                    else ans = ans * 2;
                }
            }
            cout << ans << endl;
            res += ans;
            if(s[i] == '0') cnt_0 ++;
            if(s[i] == '1') cnt_1 ++;
        }
        cout << res << endl;
    }
}
