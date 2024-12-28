#include <iostream>
#include<algorithm>
using namespace std;
typedef long long ll;
#define For(type, i, a, b) for (type i = (a); i <= (b); ++i)
#define endl '\n'
#define YES cout << "YES\n"
#define NO cout << "NO\n"

ll ans = 0, res = 0, temp = 0;
ll n, m, k;
const ll limit  = 4e5 + 10;

ll a[limit], b[limit], c[limit];
void solve() {
	cin >> n >> m >> k;
    For(ll, i, 1, n){
        c[i] = 0;
    }
    For(ll, i, 1, m){
        cin >> a[i];
    }
    For(ll, i, 1, k){
        cin >> b[i];
        c[b[i]] = 1;
    }

    For(ll, i, 1, m){
        if(k >= n - 1 && c[a[i]] == 0 || k == n){
            cout <<"1";
        }  
        else cout <<"0";
    }
    cout << endl;
}
 
int main() {
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	int tt; cin >> tt; for (int i = 1; i <= tt; i++) {solve();}
}