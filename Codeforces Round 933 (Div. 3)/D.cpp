#include <iostream>
#include<algorithm>
using namespace std;
typedef long long ll;
#define For(type, i, a, b) for (type i = (a); i <= (b); ++i)
#define endl '\n'
#define YES cout << "YES\n"
#define NO cout << "NO\n"

ll ans = 0, res = 0, temp = 0;
ll n, m, u;
const ll limit = 2e5 + 10;
ll a[limit], b[limit];

char c[limit];

void dfs(char type, ll x, ll i){
    //  cout << type << " " << x << " " << i << endl;
    if(i == m + 1){
        b[x] = 1;
    }
    else
    if(type == '?'){
        For(ll, j, 1, 2){
            if(j == 1)
                dfs(c[i + 1], (x + a[i]) % n, i + 1);
            else if(j == 2)
                dfs(c[i + 1], (x + n - a[i]) % n , i + 1);
        }
    }
    else if(type == '1'){
        dfs(c[i + 1], (x + n - a[i]) % n, i + 1);
    }   
    else if(type == '0'){
        dfs(c[i + 1], (x + a[i]) % n, i + 1);
    }
}
void solve() {
	cin >> n >> m >> u;
    For(ll, i, 1, m){
        cin >> a[i] >> c[i];
    }
    For(ll, i, 0, n){
        b[i] = 0;
    }
    res = 0;

    dfs(c[1], u, 1);
    
    For(ll, i, 0, n){
        if(b[i] == 1)
            res ++;
    }
    cout << res << endl;
    b[n] = b[0];
    For(ll, i, 1, n){
        if(b[i] == 1)
            cout << i <<" ";
    }
    cout << endl;
}
 
int main() {
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	int tt; cin >> tt; for (int i = 1; i <= tt; i++) {solve();}
}