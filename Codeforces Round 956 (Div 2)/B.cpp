#include<iostream>
#include<algorithm>
using namespace std;
typedef long long ll;
#define For(type, i, a, b) for (type i = (a); i <= (b); ++i)
#define endl '\n'

const ll limit = 5e2 + 10;
ll res = 0;
ll test;
ll n, m;
ll a[limit][limit];
ll b[limit][limit];

char kd;
int main(){
    cin >> test;
    while(test--){
        cin >> n >> m;
        For(ll, i, 1, n)
            For(ll, j, 1, m){
                cin >> kd;
                a[i][j] = int(kd - 48);
            }
        
        For(ll, i, 1, n)
            For(ll, j, 1, m){
                cin >> kd;
                b[i][j] = int(kd - 48);
            }
        ll ans = 0;
        For(ll, i, 1, n - 1){
            For(ll, j, 1, m - 1){
                if(a[i][j] != b[i][j]){
                    ans = (b[i][j] - a[i][j] + 3) % 3;

                    a[i][j] = b[i][j];

                    a[i + 1][j] = (a[i + 1][j] + 2 * ans) % 3;
                    a[i][j + 1] = (a[i][j + 1] + 2 * ans) % 3;

                    a[i + 1][j + 1] = (a[i + 1][j + 1] + ans) % 3;
                }
            }
        }
        // For(ll, i, 1, n){
        //     cout << endl;
        //     For(ll, j, 1, m)
        //         cout << a[i][j] << " ";

        // }
        bool ok = true;
        For(ll, i, 1, n)
            For(ll, j, 1, m)
                if(a[i][j] != b[i][j])
                    ok = false;
        if(ok) 
            cout << "YES" << endl;
        else cout << "NO" << endl;
    }
    
}
