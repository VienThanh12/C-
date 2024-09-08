#include <iostream>
#include<algorithm>
using namespace std;

typedef long long ll;
#define For(type, i, a, b) for (type i = (a); i <= (b); ++i)
#define endl '\n'
 
const ll limit  = 2e5 + 10;
ll a[limit];
ll seen[limit];
string s;
ll f[limit];
ll cnt = 0;

void dfs_1(ll x){
    seen[x] = true;
    if(s[a[x] - 1] == '0')  cnt ++;
    if(seen[a[x]] == 0){
        dfs_1(a[x]);
    }
}

void dfs_2(ll x){
    seen[x] = true; 
    if(seen[a[x]] == 0){
        f[a[x]] = max(f[a[x]], f[x]);
        dfs_2(a[x]);
    }
}

void solve() {
	ll n;
    cin >> n;
    For(ll, i, 1, n)
        cin >> a[i];
    cin >> s;

    For(ll, i, 1, n){
        if(seen[i] == 0){
            cnt = 0;
            dfs_1(i);
            f[i] = cnt;
        }
    }
   For(ll, i, 0, n + 1){
        seen[i] = 0;
    }

    For(ll, i, 1, n){
        if(seen[i] == 0){
            cnt = 0;
            dfs_2(i);
        }
    }
  
    For(ll, i, 1, n){
        cout << f[i] <<" ";
    }
    cout << endl;
    For(ll, i, 0, n + 1){
        seen[i] = 0;
        f[i] = 0;
    }
}
 
int main() {
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	int tt; cin >> tt; for (int i = 1; i <= tt; i++) {solve();}
}