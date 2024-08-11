#include <iostream>
#include<algorithm>
using namespace std;

typedef long long ll;
#define For(type, i, a, b) for (type i = (a); i <= (b); ++i)
#define endl '\n'
 
ll x, y, k;

void solve() {
	cin >> x >> y >> k;
    ll cnt = 1;
    if(k % 2 == 0){
        For(ll, i, 1, k - 2){
            if(i % 2 == 1){
                cout << cnt << " " << cnt << endl;
                cnt = -cnt;
            }
            else if(i % 2 == 0){
                cout << cnt << " " << cnt << endl;
                cnt = -cnt;
                cnt ++;
            }
        }
        cout << 0 <<" " << 0 << endl;
        cout << x << " " << y << endl;
        return;
    }

     if(k % 2 == 1){
        For(ll, i, 1, k - 1){
            if(i % 2 == 1){
                cout << cnt << " " << cnt << endl;
                cnt = -cnt;
            }
            else if(i % 2 == 0){
                cout << cnt << " " << cnt << endl;
                cnt ++;
            }
        }
        cout << x << " " << y << endl;
        return;
    }

}
 
int main() {
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	int tt; cin >> tt; for (int i = 1; i <= tt; i++) {solve();}
}