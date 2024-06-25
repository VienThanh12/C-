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


int main(){
    cin >> test;
    while(test--){
        bool ok = true;
        cin >> n;
        string s;
        cin >> s;
        if(n <= 2){
            cout << int(s[0] - 48) * 10 + int(s[1] - 48) << endl;
            ok = false;
            continue;
        }
        if(ok == false)
            continue;

        For(ll, i, 0, s.length() - 1)
            if(s[i] == '0' && n != 3){
                ok = false;
                cout << 0 << endl;
                break;
            }
        if(ok == false)
            continue;
        For(ll, i, 0, s.length() - 1){
            a[i + 1] = int(s[i] - 48); 
        }
        ll res = 1e18;
        ll sum = 0;
        For(ll, i, 1, n - 1){
            sum = 0;
            sum = a[i] * 10 + a[i + 1];
            ll u = 0, v = 0, cnt_1 = 0, cnt_2 = 0;
            For(ll, j, 1, i - 1){
                if(a[j] != 1)
                    u += a[j];
                cnt_1 = max(cnt_1, a[j]);
            }
            For(ll, j, i + 2, n){
                if(a[j] != 1)
                    v += a[j];
                cnt_2 = max(cnt_2, a[j]);
            }
            u = max(u, cnt_1);
            v = max(v, cnt_2);
            if(u == 1) u = 0;
            if(v == 1) v = 0;
        sum = sum + u + v;

            res = min(res, sum);
        }
        cout << res << endl;
    }   
}
