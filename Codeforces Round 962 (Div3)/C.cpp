#include<iostream>
#include<algorithm>
using namespace std;
typedef long long ll;
#define For(type, i, a, b) for (type i = (a); i <= (b); ++i)
#define endl '\n'

ll test;
ll n, q;
string a;
string b;
ll l, r;
const ll limit = 2e5 + 5;

ll cnt_a[28][limit];
ll cnt_b[28][limit];

int main(){
    cin >> test;
    while(test--){
        cin >> n >> q;
        cin >> a;
        cin >> b;
        
        a = ' ' + a;
        b = ' ' + b;

        for(ll i = 1; i < a.length(); i++){
            for(ll j = 0; j <= 25; j++){
                cnt_a[j][i] = cnt_a[j][i - 1];
                cnt_b[j][i] = cnt_b[j][i - 1];
            }
            cnt_a[int(a[i]) - 97][i]++;
            cnt_b[int(b[i]) - 97][i]++;
        }

        // For(ll, i, 97, 122){
        //     cout << cnt_a[i][a.length() - 1] << ' ';
        // }
        while(q--){
            ll res = 0;
            cin >> l >> r;
            For(ll, i, 0, 25){
                ll temp_a, temp_b;
                temp_a = cnt_a[i][r] - cnt_a[i][l - 1];
                temp_b = cnt_b[i][r] - cnt_b[i][l - 1];
                if(temp_a > temp_b)
                    res += temp_a - temp_b;
            }
            cout << res << endl;
        }
         for(ll i = 1; i < a.length(); i++){
            for(ll j = 0; j <= 25; j++){
                cnt_a[j][i] = 0;
                cnt_b[j][i] = 0;
            }
        }
    }
}
