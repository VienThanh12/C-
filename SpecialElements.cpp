#include <bits/stdc++.h>
#define fi first
#define se second
#define For(i, a, b) for (int i = (a); i <= (b); ++i)
#define Ford(i, a, b) for (int i = (a); i >= (b); --i)
#define Rep(i, a, b) for (int i = (a); i < (b); ++i)
#define Repd(i, a, b) for(int i = (a); i > (b); --i)
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
const ll limit2 = 8e3 + 50;
const ll limit3 = 1e4 + 5;
 
ll test;
ll n, x, m;
ll res = 0, sum = 0, ans = 0, kd, hkd;
bool ok = false;
ll a[limit2], b[limit2], c[limit2];
 
void FastIn(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
}
void ReadIn(){
    cin >> test;
    For(iii, 1, test){
        cin >> n;
        For(i, 1, n)
            b[i] = c[i] = 0;
        For(i, 1, n){
            cin >> a[i];
            c[a[i]]++;
        }
        res = 0;
        For(i, 1, n - 1){
            sum = a[i];
            For(j, i + 1, n){
                sum += a[j];
                if(sum > n) break;
                b[sum] = 1;
            }
        }
        res = 0;
        For(i, 1, n){
            res += c[i] * b[i];
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
