#include <bits/stdc++.h>
#define fi first
#define se second
#define For(i, a, b) for (int i = (a); i <= (b); ++i)
#define Ford(i, a, b) for (int i = (a); i >= (b); --i)
#define endl '\n'
#define debug(a) cout << a << endl
using namespace std;

typedef long long ll;
typedef pair<ll, ll> pll;
typedef vector<ll> vll;

const ll maxN = 1e18;
const ll minN = -1e18;
const ll MOD = 1e9 + 7;

const ll limit = 2e5 + 5;
const ll limit1 = 1e6 + 5;
const ll limit2 = 1e3 + 5;
const ll limit3 = 1e4 + 5;

ll test;
ll n;
ll res = 0, sum = 0, ans = 0, kd, hkd;

void FastIn(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
}

void ReadIn(){
    cin >> n;
    cout << 0 << " " << n;
}
int main(){
    FastIn();
    ReadIn();
}
/*
* Ctrl + Shift + K Delete Line
* Ctrl + / TOGGLE LINE COMMENT
Ctrl + F Find
* Ctrl + H  REPLACE
* shift + alt + f FORMAT CODE DOCUMENT
Shift + alt + uparrow/downarrow Copy line up/down
Ctrl + ]/[ INDENT/OUTDENT LINE
*/
