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
	cin >> n;

    if(n == 1){
        cout << -1  << endl;
        return;
    }
    if(n == 2){
        cout << 66  << endl;
        return;
    }
    if(n == 3){
        cout << -1  << endl;
        return;
    }
    if(n == 4){
        cout << 3366 << endl;
        return;
    }
    For(ll, i,  1, n - 4){
        cout << 3;
    }

   (n % 2 == 0) ?  cout << 3366 << endl : cout << 6366 << endl;

}
 
int main() {
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	int tt; cin >> tt; for (int i = 1; i <= tt; i++) {solve();}
}