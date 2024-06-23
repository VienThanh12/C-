#include<iostream>
#include<algorithm>
using namespace std;
typedef long long ll;
#define For(type, i, a, b) for (type i = (a); i <= (b); ++i)
#define endl '\n'

ll res = 0;
ll test;
ll n, m;
const ll limit  = 1e3 + 10;
ll a[limit][limit];

int main(){
    cin >> test;
    while(test--){
        cin >> n >> m;
        For(ll, i, 0, 105)
            For(ll, j, 0, 105)
                a[i][j] = 0;
                
        For(ll, i, 1, n)
            For(ll, j, 1, m)
                cin >> a[i][j];

        bool ok = false;
        while(ok == false){
            ok = true;
            For(ll, i, 1, n)
                For(ll, j, 1, m){
                    if(a[i][j] > a[i - 1][j] && a[i][j] > a[i + 1][j] && a[i][j] > a[i][j - 1] && a[i][j] > a[i][j + 1]){
                        ok = false;
                        ll temp = max(max(a[i - 1][j], a[i + 1][j]), max(a[i][j - 1], a[i][j + 1]));
                        a[i][j] = temp;
                    }
                }
        }
        if(ok == true)
            For(ll, i, 1, n){
                For(ll, j, 1, m)
                    cout << a[i][j] << " ";
                cout << endl;
            }
    }
}
