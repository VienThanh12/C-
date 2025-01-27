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

void solve() {
	ll a_1, a_2, a_4, a_5;
    cin >> a_1 >> a_2 >> a_4 >> a_5;
    res = 0;
    ll cnt = 0;
    For(ll, i, -200, 200){
        cnt = 0;
        if(a_1 + a_2 == i){
            cnt++;
        }
        
        if(a_2 + i == a_4){
            cnt++;
        }
        if(i + a_4 == a_5){
            cnt++;
        }
        res = max(res, cnt);
    }
    cout << res << endl;
}
 
int main() {
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	int tt; cin >> tt; for (int i = 1; i <= tt; i++) {solve();}
}