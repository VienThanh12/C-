#include <bits/stdc++.h>
#define fi first
#define se second
#define For(type, i, a, b) for (type i = (a); i <= (b); ++i)
#define Ford(type, i, a, b) for (type i = (a); i >= (b); --i)
#define Rep(type, i, a, b) for (type i = (a); i < (b); ++i)
#define Repd(type, i, a, b) for(type i = (a); i > (b); --i)
#define endl '\n'
using namespace std;

typedef long long ll;

const ll maxN = 1e18;
const ll minN = -1e18;
const ll MOD = 1e9 + 7;

const ll limit = 1e3 + 5;
const ll limit1 = 1e4 + 5;
const ll limit2 = 2e5 + 5;
const ll limit3 = 1e6 + 5;

void FastIn(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
}
ll n, k;
ll c[limit1];
ll seen[limit1];
ll ans = 0;


vector<ll> a[limit];
void dfs(ll u) {
    seen[u] = true;
    for (ll i = 0; i < a[u].size(); i++) {
        ll v = a[u][i];
        if (seen[v] == false) {
       //     ans++;
            dfs(v);
            ans++;
        }
    }
}

/*
4 1
1 2 4 3
1 2
1 3
1 4
*/

void ReadIn(){
   freopen("KIOSKS.INP","r",stdin);
   freopen("KIOSKS.OUT","w",stdout);
    cin >> n >> k;
    ll result = 0;
    For(ll, i, 1, n){
        cin >> c[i];
        if(c[i] <= k) result++;
    }
    For(ll, i, 1, n - 1){
        ll u, v;
        cin >> u >> v;
        a[u].push_back(v);
        a[v].push_back(u);
    }
    if(k == 1){
        ll res = 0;
        For(ll, i, 1, n){
            ans = 0;
            if(c[i] == 1){
                dfs(i);
                res += ans;
            }
            For(ll, j, 1, n){
                seen[j] = false;
            }
        }
        cout << res;
        return ;
    }
  //  cout << result << endl;
    ll kd = n + 1, ress = 0;
    For(ll, i, 1, result){
        ress += kd;
        kd--;
    }

    cout << ress;

}
int main(){
    FastIn();
    ReadIn();
}
