#include <iostream>
#include<algorithm>
using namespace std;

typedef long long ll;
#define For(type, i, a, b) for (type i = (a); i <= (b); ++i)
#define endl '\n'
 
ll n;
const ll limit = 1e3 + 10;

ll a[limit];
ll seen[limit];
ll res = 0;

void dfs(ll v){
    seen[v] = 1;
    res++;
    if(seen[a[v]] == 0){
        dfs(a[v]);
    }
}

void solve() {
    cin >> n;
    ll ans = 1e18;
	For(ll, i, 1, n){
        cin >> a[i];
        seen[i] = 0;
    }
    For(ll, i, 1, n){
        if(seen[i] == 0){
            res = 0;
            dfs(i);
            ans = min(ans, res);
        }
    }
    ans >= 3 ? cout << 3 << endl : cout << 2 << endl;
}
 
int main() {
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	int tt; cin >> tt; for (int i = 1; i <= tt; i++) {solve();}
}