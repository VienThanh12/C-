#include <bits/stdc++.h>
#define fi first
#define se second
#define For(type, i, a, b) for (type i = (a); i <= (b); ++i)
#define Ford(type, i, a, b) for (type i = (a); i >= (b); --i)
#define Rep(type, i, a, b) for (type i = (a); i < (b); ++i)
#define Repd(type, i, a, b) for(type i = (a); i > (b); --i)
#define endl '\n'
using namespace std;

typedef long long ll;

const ll maxN = 1e18;
const ll minN = -1e18;

const ll limit = 1e3 + 5;
const ll limit1 = 1e4 + 5;
const ll limit2 = 2e5 + 5;
const ll limit3 = 1e6 + 5;

ll test;
ll n, m, k, x, y, z, u, v;
ll res = 0, sum = 0, ans = 0, kd, hkd, answer;
bool ok = false;
string s;
ll mod;
ll a[limit3];

void FastIn(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
}


void ReadIn(){
    cin >> s;
    for(ll i = 0; i < s.length(); i++)
        a[s[i]]++;
    for(ll i = 0; i < s.length(); i++)
        if(a[s[i]] % 2 == 1){
            a[s[i]] --;
            res++;
        }
    cout << res - 1;
}
int main(){
    FastIn();
    ReadIn();
}
