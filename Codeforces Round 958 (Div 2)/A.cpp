#include<iostream>
#include<algorithm>
using namespace std;
typedef long long ll;
#define For(type, i, a, b) for (type i = (a); i <= (b); ++i)
#define endl '\n'

ll res = 0;
ll test;
ll n, k;

// 4p
int main(){
    cin >> test;
    while(test--){
        cin >> n >> k;
        res = 0;
        k--;
        while(n > 1){
            n -= k;
            res++;
        }
        cout << res << endl;
    }
}
