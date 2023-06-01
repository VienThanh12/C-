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
const ll limit2 = 1e3 + 5;
const ll limit3 = 1e4 + 5;
 
ll test;
ll n;
ll a[limit1], b[limit1];
ll res = 0, sum = 0, ans = 0, kd, hkd;
ll x, y, u , v, wer, wes;
bool ok = false;
 
void FastIn(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
}
void ReadIn(){
    cin >> test;
    For(iii, 1, test){
        cin >> n;
        b[0] = 0;
        For(i, 1, n){
            cin >> a[i];
            b[i] = b[i - 1] + a[i];
        }
        // x, y starts; u v gioi han
        if(n == 1){
            cout << 1 <<" " << a[1] << " " << 0 << endl;
            continue;
        }
 
        x = 0; y = n;
        u = 0; v = n;
        kd = 1;res = 0;ans = 0;
        hkd = 0;sum = 0;
        wer = 0;
        while(u < v){
            if(kd % 2 == 1){
                while(b[u] - b[x] <= hkd && u < v){
                    u++;
                }
                sum = b[u] - b[x];
                res = res + b[u] - b[x];
              //  cout << sum <<" "<< x << " " << u << endl;
                wer++;
                x = u;
            }
            if(kd % 2 == 0){
                while(b[y] - b[v] <= sum && u < v){
                    v--;
                }
                hkd = b[y] - b[v];
                ans = ans + b[y] - b[v];
              //  cout << hkd <<" " << y <<" " << v << endl;
               // wes += y - v;
               wer++;
                y = v;
            }
            kd++;
        }
        cout << wer <<" "<< res <<" " << ans << endl;
    }
}
int main(){
    FastIn();
    ReadIn();
}
/*
5
4 4 5 3 1
 
2 2 1 1 1
3 3 3 2 1
*/
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
