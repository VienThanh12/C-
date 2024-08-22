#include <iostream>
#include<algorithm>
using namespace std;

typedef long long ll;
#define For(type, i, a, b) for (type i = (a); i <= (b); ++i)
#define endl '\n'
 
ll x, y, k;

void solve() {
	cin >> x >> y >> k;
    if(k % 2 == 1){
        cout << x <<" " << y << endl;
        ll cnt_down = x, cnt_up = x;
        For(ll, i, 1, k - 1){
            if(i % 2 == 1){
                cnt_up ++;
                cout << cnt_up <<" " << y << endl;
            }
            else if(i % 2 == 0){
                cnt_down --;
                cout << cnt_down <<" " << y << endl;
            }
        }
    }
    else {
        ll cnt_down = x, cnt_up = x;

        For(ll, i, 1, k){
            if(i % 2 == 1){
                cnt_up ++;
                cout << cnt_up <<" " << y << endl;
            }
            else if(i % 2 == 0){
                cnt_down --;
                cout << cnt_down <<" " << y << endl;
            }
        }
    }
}
 
int main() {
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	int tt; cin >> tt; for (int i = 1; i <= tt; i++) {solve();}
}