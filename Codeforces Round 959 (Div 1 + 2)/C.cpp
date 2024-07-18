#include<iostream>
#include<algorithm>
using namespace std;
typedef long long ll;
#define For(type, i, a, b) for (type i = (a); i <= (b); ++i)
#define endl '\n'

ll res = 0;
ll test;
ll n, x;
const ll limit = 2e5 + 10;
ll a[limit];

int main(){
    cin >> test;
    while(test--){
        cin >> n >> x;
        For(ll, i, 1, n)
            cin >> a[i];
        res = 0;
        For(ll, i, 1, n){
            ll first = i, second = n;
            ll mid = (first + second) / 2;
            while(first <= second)
        }
    }
}
