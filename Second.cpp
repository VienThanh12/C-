#include<iostream>
#include<algorithm>
using namespace std;
typedef long long ll;
#define For(type, i, a, b) for (type i = (a); i <= (b); ++i)
#define endl '\n'

ll test;
ll res = 0;
ll n, a, b;

int main(){
    cin >> test;
    while(test--){
        cin >> n >> a >> b;
        if(b - a > 0){
            ll temp = min(b - a, n);
            ll first = b;
            ll second = b - temp + 1;
            //cout << first << " " << second << " " << temp << endl; 
            res = temp * (first + second) / 2 + (n - temp) * a;
        }
        else res = n * a;
        cout << res << endl;
    }
}
