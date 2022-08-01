#include <bits/stdc++.h>
#define fi first
#define se second
#define For(type, i, a, b) for (type i = (a); i <= (b); ++i)

#define endl '\n'
using namespace std;

typedef long long ll;

const ll maxN = 1e18;
const ll minN = -1e18;
const ll MOD = 1e9 + 7;

const ll limit = 1e5 + 5;
const ll limit1 = 1e4 + 10;
const ll limit2 = 2e5 + 5;
const ll limit3 = 1e6 + 5;

ll test;
long n, m, z, k;
ll res = 0, sum = 0, ans = 0, kd, hkd, answer;
bool ok = false;

void FastIn(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
}

bool Check(ll x){
    For(ll, i, 2, sqrt(x)){
        if(x >= i * i && x % (i * i) == 0)
            return false;
    }
    return true;
}
void ReadIn(){
    cin >> n;
    ok = false;
    res = -1;
    For(ll, i, 1, sqrt(n)){
        if(n % i == 0){
            if(Check(i) == true)
                res = max(res, i);
            if(Check(n / i) == true)
                res = max(res, n / i);
        }
    }
    cout << res;
}
int main(){
    FastIn();
    ReadIn();
}
