#include<iostream>
#include<algorithm>
using namespace std;
typedef long long ll;
#define For(type, i, a, b) for (type i = (a); i <= (b); ++i)
#define endl '\n'

ll res;
ll test;
ll n, s, m;

const ll limit = 2e5 + 100;
ll l[limit], r[limit];

int main(){
    cin >> test;
    while(test--){
        cin >> n >> s >> m;
        For(ll, i, 1, n)
            cin >> l[i] >> r[i];
        bool ok = false;
        For(ll, i, 1, n){
            if(i == 1){
                if(l[i] - 0 >= s){
                    ok = true;
                    // cout << l[i] - 0 << endl;
                } 
            }
            else if(i == n){
                if(m - r[i] >= s){
                    ok = true;
                    // cout << m - r[i] << endl;
                }
            }

            if(l[i] - r[i - 1] >= s && i >= 2){
                    // cout << l[i] - r[i - 1] << endl;
                ok = true;
            }
        }
        if(l[1] >= s){
            ok = true;
        }
        if(l[n] - r[n - 1] >= s){
            ok = true;
        }
        if(m - r[n] >= s){
            ok = true;
        }
        if(ok)  cout << "YES" << endl;
        else cout << "NO" << endl;
        For(ll, i, 0, n + 1){
            l[i] = r[i] = 0;
        }
    }
}
