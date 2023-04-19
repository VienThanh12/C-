#include <bits/stdc++.h>
 
#define For(type, i, a, b) for (type i = (a); i <= (b); ++i)
 
using namespace std;
 
typedef long long ll;
 
const ll limit2 = 2e5 + 5;
const ll limit3 = 1e9 + 5;
 
ll n, m, x;
ll res = 0, sum = 0, ans = 0, u, v;
bool ok = false;
ll test;
 
void FastIn(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
}
ll Prime(ll L, ll R) {
    vector<bool> isPrime(R - L + 1, true);
 
    for (long long i = 2; i * i <= R; ++i) {
        for (long long j = max(i * i, (L + i - 1) / i * i); j <= R; j += i) {
            isPrime[j - L] = false;
        }
    }
 
    if (1 >= L) {
        isPrime[1 - L] = false;
    }
    ll res = 0;
    for (long long x = L; x <= R; ++x) {
        if (isPrime[x - L]) {
            res ++;
        }
    }
    //cout << res;
    return res;
}
 
void ReadIn(){
    cin >> test;
    while(test--){
        cin >> u >> v;
        cout << Prime(u, v) << endl;
    }
}
int main(){
    FastIn();
    ReadIn();
}
