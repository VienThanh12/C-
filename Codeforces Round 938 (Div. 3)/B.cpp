#include <iostream>
#include<algorithm>
#include<map>
using namespace std;
typedef long long ll;
#define For(type, i, a, b) for (type i = (a); i <= (b); ++i)
#define endl '\n'
#define YES cout << "YES\n"
#define NO cout << "NO\n"

ll ans = 0, res = 0, temp = 0;
ll n, c, d;

const ll limit = 1e6 + 10;
const ll limit_2 = 1e3;
ll a[limit_2][limit_2];
ll b[limit];

map<ll, ll> check;

void solve() {
	cin >> n >> c >> d;
    For(ll, i, 1, n * n){
        cin >> b[i];
        check[b[i]]++;
    }
    sort(b + 1, b + 1 + n * n);
    ll x = b[1];
    bool ok = true;
    a[1][1] = b[1];
    For(ll, i, 2, n){
        a[i][1] = a[i - 1][1] + c; 
    }
    For(ll, i, 1, n){
        For(ll, j, 2, n){
            a[i][j] = a[i][j - 1] + d; 
        }
    }
    For(ll, i, 1, n){
        For(ll, j, 1, n){
            if(check[a[i][j]] == 0){
                cout << "NO" << endl;
                For(ll, i, 1, n * n){
                    check[b[i]] = 0;
                }
                return;
            }
            check[a[i][j]] --;
        }
    }
    For(ll, i, 1, n * n){
        check[b[i]] = 0;
    }
    cout <<"YES" << endl;
}
 
int main() {
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	int tt; cin >> tt; for (int i = 1; i <= tt; i++) {solve();}
}