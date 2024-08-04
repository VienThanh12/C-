#include<iostream>
#include<algorithm>
#include<map>
using namespace std;
typedef long long ll;
#define For(type, i, a, b) for (type i = (a); i <= (b); ++i)
#define endl '\n'

ll res;
ll test;
ll n, k;

const ll limit = 2e5 + 10;
ll a[limit];

bool check(ll x, ll u){
    if((((x - u) / k ) % 2) == 0) return true;
    return false;
}

int main(){
    cin >> test;
    while(test--){
        cin >> n >> k;
        res = -1;
        ll max_start = 0;
        ll max_end = 0;
        For(ll, i, 1, n){
            cin >> a[i];
            max_start = max(max_start, a[i]);
        }
        max_end = max_start + k;
        sort(a + 1, a + 1 + n);
        

    }
}
