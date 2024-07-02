#include<iostream>
#include<algorithm>
using namespace std;
typedef long long ll;
#define For(type, i, a, b) for (type i = (a); i <= (b); ++i)
#define endl '\n'

ll res = 0;
ll test;
ll n;
ll a[40];
string s;
ll b[200];
ll ans;
int main(){
    cin >> test;
    while(test--){
        cin >> n;
        cin >> s;
        res = 0;
        if(s.length() <= 2){
            cout << int(s[0] - 48) * 10 + int(s[1] - 48) << endl;
            continue;
        }
        res = 1e18;
        For(ll, i, 0, s.length() - 2){
            ans = int(s[i] - 48) * 10 + int(s[i + 1] - 48);
            ll kd = 0, sum = 0;
            For(ll, j, 1, s.length() - 2){
                b[j] = 0;
            }
            For(ll, j, 1, s.length() - 2){
                while(kd == i || kd == i + 1) kd++;
                b[j] = int(s[kd] - 48);
                kd++;
            }
            sort(b + 1, b +  1 + s.length() - 2);
            // For(ll, j, 1, s.length() - 2)  
            //     cout << b[j] << " ";
            // cout << endl;
            if(b[1] == 0){
                res = 0;
                continue;
            }

            if(b[s.length() - 2] == 1){
                sum = 1;
                //cout << res << endl;
                res = min(res, min(1 + ans, 1  * ans));
                continue;
            }
            For(ll, j, 1, s.length() - 2){
                if(b[j] == 1)  continue;
                sum += b[j];
            }
            res = min(res, min(sum + ans, sum  * ans));
        }
        cout << res << endl;
    }   
}
