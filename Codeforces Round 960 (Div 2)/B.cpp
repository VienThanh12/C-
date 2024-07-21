#include<iostream>
#include<algorithm>
using namespace std;
typedef long long ll;
#define For(type, i, a, b) for (type i = (a); i <= (b); ++i)
#define endl '\n'

ll res = 0;
ll test;
ll n, x, y;

const ll limit = 1e5 + 10;

ll a[limit];

int main(){
    cin >> test;
    while(test--){
        cin >> n >> x >> y;
        ll kd = 0;
        for(ll i = y - 1; i >= 1; i--){
            if(kd % 2 == 1){
                a[i] = 1;
            }
            if(kd % 2 == 0){
                a[i] = -1;
            }
            kd ++;
        }
        For(ll, i, y, x){
            a[i] = 1;
        }
        kd = 0;
        For(ll, i, x + 1, n){
            if(kd % 2 == 0){
                a[i] = -1;
            }
            if(kd % 2 == 1){
                a[i] = 1;
            }
            kd ++;
        }
        For(ll, i, 1, n)
            cout << a[i] <<" ";
            
        cout << endl;
    }
}


// 3 3 2
// 1 1 1 
// -1 1 1
