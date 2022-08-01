#include<bits/stdc++.h>
using namespace std;
#define For(type, i, a, b) for(type i = a; i <= b; i++)

typedef long long ll;

const ll MOD = 1e9 + 7;

const ll limit = 1e5 + 5;

ll test;
ll a[limit];
ll n;

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
    cin >> n;
    ll res = 0;
    For(ll, i, 1, n)
        cin >> a[i];
    sort(a + 1, a + 1 + n);
    ll ans = 0;

    For(ll, i, 1, n)
        For(ll, j, i + 1, n){
            ll first = j + 1, second = n, mid;
            ll res = -1;
            while(first <= second){
                mid = (first + second) / 2;
                if(a[mid] < a[i] + a[j]){
                    res = mid;
                    first = mid + 1;
                }
                else second = mid - 1;
            }
            if(res != - 1)
                ans = ans + res - j;
        }
        cout << ans;
}

int main(){
    //freopen("PracticeForHSG12.INP","r", stdin);
    //freopen("PracticeForHSG12.OUT","w", stdout);
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
