#include <iostream>
#include<algorithm>
using namespace std;

typedef long long ll;
#define For(type, i, a, b) for (type i = (a); i <= (b); ++i)
#define endl '\n'
 
ll n, m, q;
ll res;

const ll limit = 2e5 + 10;
ll b[3];
ll x;

void solve() {
	cin >> n >> m >> q;
    For(ll, i, 1, m)
        cin >> b[i];
    sort(b + 1, b + 1 + m);
    cin >> x;
    if(x < b[1]){
        cout << (x - 1) + (b[1] - x) << endl;
    }
    if(b[1] < x && x < b[2]){
        cout << (b[2] - b[1]) / 2 << endl;
    }
    else if(b[2] < x) {
        cout << (n - x) + (x - b[2]) << endl;
    }
}
 
int main() {
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	int tt; cin >> tt; for (int i = 1; i <= tt; i++) {solve();}
}