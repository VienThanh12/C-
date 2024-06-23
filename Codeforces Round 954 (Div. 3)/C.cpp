#include<iostream>
#include<algorithm>
using namespace std;
typedef long long ll;
#define For(type, i, a, b) for (type i = (a); i <= (b); ++i)
#define endl '\n'

ll res = 0;
ll test;
ll n, m;
const ll limit = 2e5 + 6;
ll a[limit];
ll check[limit];
ll b[limit];

int main(){
    cin >> test;
    while(test--){
        cin >> n >> m;
        string s, c;
        cin >> s;
        For(ll, i, 1, m){
            a[i] = 0;
            b[i] = 0;
            check[i] = 0;
        }
        For(ll, i, 1, n){
            check[i] = 0;
            a[i] = 0;
            b[i] = 0;
        }
        For(ll, i, 1, m)
            cin >> a[i];

        sort(a + 1, a + 1 + m);
        ll kd = 0;
        For(ll, i, 1, m){
            if(check[a[i]] == 0){
                check[a[i]] = 1;
                kd ++;
                b[kd] = a[i];
            }
        }
        sort(b + 1, b + 1 + kd);
        // cout << endl << " bi";
        // For(ll, i, 1, kd)
        //     cout << b[i] <<" ";
        // cout << endl;

        cin >> c;
        sort(c.begin(), c.end());

        For(ll, i, 1, kd){
            s[b[i] - 1] = c[i - 1];
        }
        // For(ll, i, 1, m){
        //     cout << a[i] << " ";
        // }
        // cout << endl;
        // cout << c << endl;

        cout << s << endl;
    }
}
