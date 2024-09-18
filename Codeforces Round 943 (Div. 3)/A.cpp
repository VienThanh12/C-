#include <iostream>
#include<algorithm>
using namespace std;

typedef long long ll;
#define For(type, i, a, b) for (type i = (a); i <= (b); ++i)
#define endl '\n'
 
ll x;
int gcd(int a, int b) {
    while (b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}

void solve() {
	cin >> x;
    ll res = 0, ans = 0;
    For(ll, i, 1, x - 1){
        
        ll temp = gcd(i, x) + i;
        if(temp > res){
            res = temp;
            ans = i;
        }
    }
    cout << ans << endl;
}
 
int main() {
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	int tt; cin >> tt; for (int i = 1; i <= tt; i++) {solve();}
}