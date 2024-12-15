#include <iostream>
#include<algorithm>
using namespace std;
typedef long long ll;
#define For(type, i, a, b) for (type i = (a); i <= (b); ++i)
#define endl '\n'
#define YES cout << "YES\n"
#define NO cout << "NO\n"

ll ans = 0, res = 0, temp = 0;
ll n;

const ll limit = 2e5 + 10;
ll a[limit], b[limit], cur[limit];

void solve() {
	cin >> n;
	For(ll, i, 1, n)    
        cin >> a[i];
    res = 1;
    For(ll, i, 1, n)
        cur[i] = 1;
    while(true){
        res++;
        For(ll, i, 1, n){
            b[i] = 0;
        }
        For(ll, i, 1, n){
            if(cur[i]){
                b[a[i]] = 1;
            }
        }
        bool ok = true;
        For(ll, i, 1, n){
            if(b[i] != cur[i])
                ok = false;
        }
        // For(ll, i, 1, n){
        //     cout << cur[i] <<" ";
        // }
        // cout << endl;
        // For(ll, i, 1, n){
        //     cout << b[i]  <<" ";
        // }
        // cout << endl;
        if(ok){
            cout << res << endl;
            break;
        }
        else {
            For(ll, i, 1, n){
                cur[i] = b[i];
            }
        }
    } 

}
 
int main() {
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	int tt; cin >> tt; for (int i = 1; i <= tt; i++) {solve();}
}