#include <iostream>
#include<algorithm>
using namespace std;

typedef long long ll;
#define For(type, i, a, b) for (type i = (a); i <= (b); ++i)
#define endl '\n'

ll l, r;

void solve() {
	cin >> l >> r;
    ll cnt_odd = 0;
    For(ll, i, l, r){
        if(i % 2 == 1){
            cnt_odd ++;
        }
    }
    cout << cnt_odd / 2 << endl;
}
 
int main() {
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	int tt; cin >> tt; for (int i = 1; i <= tt; i++) {solve();}
}