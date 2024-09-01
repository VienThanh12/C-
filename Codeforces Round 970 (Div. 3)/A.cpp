#include <iostream>
#include<algorithm>
using namespace std;

typedef long long ll;
#define For(type, i, a, b) for (type i = (a); i <= (b); ++i)
#define endl '\n'
 
ll a, b;

void solve() {
	cin >> a >> b;
    bool ok = false;
    For(ll, i, 0, a){
        For(ll, j, 0, b){
            ll res = i - (a - i);
            ll ans = (j - (b - j)) * 2;
            if(res + ans == 0){
                ok = true;
            }
        }
    }
    ok == true ? cout <<"YES" << endl : cout <<"NO" << endl;
}
 
int main() {
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	int tt; cin >> tt; for (int i = 1; i <= tt; i++) {solve();}
}