#include <iostream>
#include<algorithm>
using namespace std;

typedef long long ll;
#define For(type, i, a, b) for (type i = (a); i <= (b); ++i)
#define endl '\n'
 
const ll limit = 3e5 + 10;

ll a[limit];
ll b[limit];
ll n;

void solve() {
    cin >> n;
    For(ll, i, 1, n)
        cin >> a[i];
    For(ll, i, 1, n)
        cin >> b[i];
    
    bool ok_1 = true;
    bool ok_2 = true;
    For(ll, i, 1, n){
        if(a[i] != b[i]){
            ok_1 = false;
        }
        if(a[i] != b[n - i + 1]){
            ok_2 = false;
        }
    }
    if(ok_1 || ok_2){
        cout << "Bob" << endl;
    }
    else cout << "Alice" << endl;
}
 
int main() {
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	int tt; cin >> tt; for (int i = 1; i <= tt; i++) {solve();}
}