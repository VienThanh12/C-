#include<iostream>
#include<algorithm>
using namespace std;
typedef long long ll;
#define For(type, i, a, b) for (type i = (a); i <= (b); ++i)
#define endl '\n'

ll res = 0;
ll test;
ll n;
string a, b;

int main(){
    cin >> test;
    while(test--){
        cin >> n;
        cin >> a;
        cin >> b;
        ll res = 0;
        For(ll, i, 0, n - 2){
            if(a[i] == '.' && a[i + 1] == '.' && a[i + 2] == '.' && b[i] == 'x' && b[i + 1] == '.' && b[i + 2] == 'x')
                res++;
            
            if(b[i] == '.' && b[i + 1] == '.' && b[i + 2] == '.' && a[i] == 'x' && a[i + 1] == '.' && a[i + 2] == 'x')
                res++;
        }
        cout << res << endl;
    }
}
