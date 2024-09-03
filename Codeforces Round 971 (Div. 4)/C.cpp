#include <iostream>
#include<algorithm>
using namespace std;

typedef long long ll;
#define For(type, i, a, b) for (type i = (a); i <= (b); ++i)
#define endl '\n'
 
ll x, y, k;
void solve() {
    cin >> x >> y >> k;
    ll cnt_1 = 0, cnt_2 = 0;
    if(x % k != 0){
        cnt_1 = 1;
    }
    if(y % k != 0){
        cnt_2 = 1;
    }
    cnt_1 += x / k;
    cnt_2 += y / k;

    if(cnt_1 > cnt_2){
        cout << cnt_1 * 2 - 1 << endl;
    }
    else
        cout << cnt_2 * 2 << endl;
	
}
 
int main() {
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	int tt; cin >> tt; for (int i = 1; i <= tt; i++) {solve();}
}