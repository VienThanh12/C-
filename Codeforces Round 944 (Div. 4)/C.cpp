#include <iostream>
#include<algorithm>
using namespace std;

typedef long long ll;
#define For(type, i, a, b) for (type i = (a); i <= (b); ++i)
#define endl '\n'
 

void solve() {
	ll a, b, c, d;
    cin >> a >> b >> c >> d;

    ll cnt = 0;
    For(ll, i, a, a + 12){
        if(i % 12 == a % 12 || i % 12 == b % 12) cnt++;
        if(i % 12 == c % 12 || i % 12 == d % 12) cnt--;
        if(abs(cnt) == 2){
            cout <<"NO" << endl;
            return;
        }
    }
    swap(a, b);
    cnt = 0 ;
    // cout << a <<" " << b <<" " << c <<" " << d << endl;
    For(ll, i, a, a + 12){
        if(i % 12 == a % 12 || i % 12 == b % 12) cnt++;
        if(i % 12 == c % 12 || i % 12 == d % 12) cnt--;
        if(abs(cnt) == 2){
            cout <<"NO" << endl;
            return;
        }
    }
    cout << "YES" << endl;
}
 
int main() {
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	int tt; cin >> tt; for (int i = 1; i <= tt; i++) {solve();}
}