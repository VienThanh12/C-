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
    if(n <= 4){
        cout << -1 << endl;
        return;
    }
    for(ll i = 1; i <= n; i += 2){
        if(i != 5){
            cout << i <<" ";
        }
    }
    cout << 5 <<" " << 4 <<" ";
    for(ll i = 2; i <= n; i += 2){
        if(i != 4)  
            cout << i <<" ";
    }
    cout << endl;
}
 
int main() {
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	int tt; cin >> tt; for (int i = 1; i <= tt; i++) {solve();}
}