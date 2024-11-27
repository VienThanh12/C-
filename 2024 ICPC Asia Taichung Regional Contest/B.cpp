#include <iostream>
#include<algorithm>
using namespace std;
typedef long long ll;
#define For(type, i, a, b) for (type i = (a); i <= (b); ++i)
#define endl '\n'
#define YES cout << "YES\n"
#define NO cout << "NO\n"

ll ans = 0, res = 0, temp = 0;
ll w, b;

bool check(ll x, ll u, ll v){
    while(x != 0){
        if(u >= x){
            u -= x;
            x--;
        }
        else if(v >= x){
            v -= x;
            x--;
        }
        else return false;
    }
    return true;
}
void solve() {
	cin >> w >> b;
    ll first = 1, second = 1e6;
    ll res = 0;
    while(first <= second){
        ll mid = (first + second) / 2;

        if(check(mid, w, b) == true){
            first = mid + 1;
            res = max(res, mid);
        }
        else second = mid - 1;
    } 
    cout<< res << endl;
}
 
int main() {
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	int tt; cin >> tt; for (int i = 1; i <= tt; i++) {solve();}
}