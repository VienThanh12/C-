#include <bits/stdc++.h>
#define fi first
#define se second
#define For(type, i, a, b) for (type i = (a); i <= (b); ++i)
#define Ford(type, i, a, b) for (type i = (a); i >= (b); --i)
#define Rep(type, i, a, b) for (type i = (a); i < (b); ++i)
#define Repd(type, i, a, b) for(type i = (a); i > (b); --i)
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
ll n, k, x, y, u, v;
ll res = 0, sum = 0, ans = 0, kd, hkd, answer;
bool ok = false;
ll a[limit2], b[limit2];
 
void FastIn(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
}
void ReadIn(){
    cin >> test;
    while(test--){
        cin >> n >> k;
        For(ll, i, 1, n) cin >> a[i];
        For(ll, i, 1, n) cin >> b[i];
 
        sort(a + 1, a + 1 + n);
        sort(b + 1, b + 1 + n);
        kd = n;
        ans = 0;
        For(ll, i, 1, n){
            if(ans == k){
                break;
            }
            if(a[i] < b[kd]){
                ans++;
                swap(a[i], b[kd]);
            }
            kd--;
        }
        res = 0;
        For(ll, i, 1, n){
            res += a[i];
        }
        cout << res << endl;
    }
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
Quy Hoạch Động
2 kiểu
+ Đếm cách
+ Dùng ít nhất
*/
 
