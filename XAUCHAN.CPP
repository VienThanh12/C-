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
ll n, m, z, k;
ll res = 0, sum = 0, ans = 0, kd = 0, hkd = 0, answer = 0;
bool ok = false, okk = false;
ll a[limit3], b[limit3];
string s;

void FastIn(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
}
void ReadIn(){
    cin >> s;
    For(ll,i, 0, s.length() - 1){
        b[s[i]]++;
    }
    For(ll,i, 0, 500){
        if(b[i] % 2 == 1){
            cout << "No";
            return ;
        }
    }
    cout << "Yes";
}
int main(){
    FastIn();
    ReadIn();
}
