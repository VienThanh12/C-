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
const ll MOD = 1e9 + 7;
 
const ll limit = 1e3 + 5;
const ll limit1 = 1e4 + 5;
const ll limit2 = 2e5 + 5;
const ll limit3 = 1e6 + 5;
 
ll test;
ll n, m, k, x, y, z, u, v;
ll res = 0, sum = 0, ans = 0, kd, hkd, answer;
bool ok = false;
ll a[limit3], b[limit3], c[limit3];
string s;
void FastIn(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
}
 
void ReadIn(){
    cin >> test;
    while(test --> 0){
        cin >> n;
        cin >> s;
        k = 0;
        res = 0;
        for(ll i = 0; i < s.length(); i++){
            if(s[i] == ')') k++;
            else k--;
            if(k > 0){
                res++;
                k--;
            }
            //cout << k <<" ";
        }
        cout << res << endl;
    }
}
int main(){
    FastIn();
    ReadIn();
}
