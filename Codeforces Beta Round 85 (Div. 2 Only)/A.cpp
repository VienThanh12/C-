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
string a, b;
void solve() {
	cin >> a;
    cin >> b;
    For(ll, i, 0, a.length() - 1){
        if(a[i] >= 65 && a[i] <= 90){
            a[i] += 32;
        }
    }
     For(ll, i, 0, b.length() - 1){
        if(b[i] >= 65 && b[i] <= 90){
            b[i] += 32;
        }
    }
    if(a > b){
        cout << 1 << endl;;
    }
    else if(a == b){
        cout << 0 << endl;
    }
    else {
        cout << -1 << endl;
    }
}
 
int main() {
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	solve();
}