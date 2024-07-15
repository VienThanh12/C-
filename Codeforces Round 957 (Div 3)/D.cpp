#include<iostream>
#include<algorithm>
using namespace std;
typedef long long ll;
#define For(type, i, a, b) for (type i = (a); i <= (b); ++i)
#define endl '\n'
 
ll res = 0;
ll test;
ll n, m, k;
string s;
const ll limit = 2e5 + 10;
 
ll a[limit], b[limit];
 
int main(){
    cin >> test;
    while(test--){
        cin >> n >> m >> k;
        cin >> s;
        For(ll, i, 0, n + 1){
            a[i] = 0;
            b[i] = 0;
        }
        a[1] = 0;
        ll kd = 1;
        s = 'L' + s;
        For(ll, i, 1, n){
            if(s[i] == 'L'){
                kd++;
                a[kd] = i;
                b[i] = 0;
            }
            else if(s[i] == 'C'){
                b[i] = b[i - 1] + 1;
                // cout << b[i] << endl;
                // cout << i << endl;
            }
        }
 
        a[kd + 1] = n + 1;
 
        // For(ll, i, 1, n){
        //     cout << a[i] << ' ';
        // }
        // cout << endl;
        // For(ll, i, 1, n + 1){
        //     cout << b[i] << ' ';
        // }
        // cout << endl;
        bool ok = true;
        For(ll, i, 1, kd){
            // cout << a[i + 1] << ' ' << a[i] << endl;
            if(a[i + 1] - a[i] <= m){
                // cout << a[i + 1] << ' ' << a[i] << endl;
               continue;
            }
 
            if(a[i + 1] - a[i] > m){
                a[i] = a[i] + m;
            }
 
            if(b[a[i + 1] - 1] - b[a[i] - 1] > 0){
                ok = false;
                continue;
            } 
 
            if(s[a[i]] == 'W') k --;
 
            
 
            if(b[a[i + 1] - 1] - b[a[i] - 1] == 0 && a[i + 1] - a[i] - 1 > k){
                ok = false;      
                continue;          
            }
            else if(b[a[i + 1] - 1] - b[a[i] - 1] == 0 && a[i + 1] - a[i] - 1 <= k){
                k -= (a[i + 1] - a[i] - 1);
                 //out << a[i + 1] << " " <<  a[i] << " " << i << endl;
                continue;
            }
        }
        
        if(ok){
            cout << "YES" << endl;
        }
        else cout <<"NO" << endl;
    }
}