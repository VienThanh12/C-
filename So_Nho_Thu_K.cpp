// PRACTICE FOR HSG12
#include<bits/stdc++.h>
using namespace std;
#define For(type, i, a, b) for(type i = a; i <= b; i++)

typedef long long ll;

const ll MOD = 1e9 + 7;

const ll limit = 1e5 + 5;

ll test;
ll a[limit];
ll n, k;

void FastIn(){
    ios_base::sync_with_stdio(false);
    cout.tie(0);
    cin.tie(0);
}
bool Check(ll i, ll j, ll k){
    if(i + j > k && i + k > j && k + j > i)
        return true;
    else return false;
}
void ReadIn(){
    cin >> n >> k;
    for(ll i = 1; i <= n; i++)
        cin >> a[i];
    sort(a + 1, a + 1 + n);
    cout << a[k];
}

int main(){
   // freopen("PracticeForHSG12.INP","r", stdin);
   // freopen("PracticeForHSG12.OUT","w", stdout);
    FastIn();
    ReadIn();
}
// 01010
// 01122
//  2 4 5
// 3
// 1 00010101110 1
// 10

// kd = 5 + 2 = 7
// 1 5 7 9 10 11 13
// 2 -> 2 + k - 1
// kd - k -> kd - 1
// 5 9  +4
// 7 10 +2
// 9 11 +4
