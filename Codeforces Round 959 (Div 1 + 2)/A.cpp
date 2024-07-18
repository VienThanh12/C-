#include<iostream>
#include<algorithm>
using namespace std;
typedef long long ll;
#define For(type, i, a, b) for (type i = (a); i <= (b); ++i)
#define endl '\n'

ll res = 0;
ll test;
ll n, m;
const ll limit = 1e3;
ll a[limit][limit];

int main(){
    cin >> test;
    while(test--){
        cin >> n >> m;
        For(ll, i, 1, n)
            For(ll, j, 1, m){
                cin >> a[i][j];
            }

        if(n * m == 1){
            cout << -1 << endl;
            continue;
        }

        For(ll, i, 1, n){
            cout << endl;
            For(ll, j, 1, m){
                a[i][j] += 1;
                a[i][j] = a[i][j] % (m * n);
                if(a[i][j] == 0)
                    a[i][j] = m * n;
                cout << a[i][j] <<" "; 
            }
        }
    }
}
