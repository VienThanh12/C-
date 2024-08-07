#include<iostream>
#include<algorithm>
using namespace std;
typedef long long ll;
#define For(type, i, a, b) for (type i = (a); i <= (b); ++i)
#define endl '\n'

ll res;
ll test;
ll n;
ll a[4];
ll b[4];

int main(){
    cin >> test;
    while(test--){
       
        cin >> a[1] >> a[2];
        cin >> b[1] >> b[2];
        res = 0;
        

        if(a[1] > b[1] && a[2] > b[2]) res += 2;
        if(a[1] > b[2] && a[2] > b[1]) res += 2;

        if(a[1] > b[1] && a[2] == b[2]) res += 2;
        if(a[2] > b[1] && a[1] == b[2]) res += 2; 
        if(a[1] > b[2] && a[2] == b[1]) res += 2;
        if(a[2] > b[2] && a[1] == b[1]) res += 2;
        cout << res << endl;
    }
}
