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

ll a[limit];

void solve() {
	cin >> n;
    For(ll, i, 1, n)
        cin >> a[i];
    For(ll, i, 1, n - 2){
        a[i + 1] -= a[i] * 2;
        a[i + 2] -= a[i];
        a[i] = 0;
        if(a[i + 1] < 0 || a[i + 2] < 0){
            cout <<"NO" << endl;
            return;
        }
    // For(ll, i, 1, n)
    //     cout << a[i] <<" ";
    // cout << endl;

    }
    // For(ll, i, 1, n)
    //     cout << a[i] <<" ";
    // cout << endl;
    For(ll, i, 1, n){
        if(a[i] != 0){
            cout <<"NO" << endl;
            return;
        }
    }
    cout <<"YES" << endl;
}
 
int main() {
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	int tt; cin >> tt; for (int i = 1; i <= tt; i++) {solve();}
}