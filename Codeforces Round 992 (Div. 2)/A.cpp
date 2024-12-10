#include <iostream>
#include<algorithm>
using namespace std;
typedef long long ll;
#define For(type, i, a, b) for (type i = (a); i <= (b); ++i)
#define endl '\n'
#define YES cout << "YES\n"
#define NO cout << "NO\n"

ll ans = 0, res = 0, temp = 0;
ll n, k;
const ll limit = 1e3 + 10;
ll a[limit];

void solve() {
    cin >> n >> k;
    For(ll, i, 1, n)   
        cin >> a[i];
    ll say_yes = false;

    For(ll, i, 1, n){
        bool ok = true;
        For(ll, j, 1, n){
            if(i != j){
                if(abs(a[i] - a[j]) % k == 0){
                    ok = false;
                }
            }
        }
        if(ok){
            cout << "YES" << endl;
            cout << i << endl;
            say_yes = true;
            break;
        }
    }
    !say_yes && cout <<"NO" << endl;
}
 
int main() {
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	int tt; cin >> tt; for (int i = 1; i <= tt; i++) {solve();}
}