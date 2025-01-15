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
    string ok = "NO";
	cin >> n;
	
    For(ll, i, 0, 1e3){
        if(i * 2020 > n){
            break;
        }
        if((n - i * 2020) % 2021 == 0){
            ok = "YES";
            break;
        }
    }
    cout << ok << endl;
}
 
int main() {
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	int tt; cin >> tt; for (int i = 1; i <= tt; i++) {solve();}
}