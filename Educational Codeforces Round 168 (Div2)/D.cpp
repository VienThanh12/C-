#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
typedef long long ll;
#define For(type, i, a, b) for (type i = (a); i <= (b); ++i)
#define endl '\n'

ll res = 0;
ll test;
ll n;
const ll limit = 2e5 + 10;

ll a[limit], p[limit];
vector<ll> ver[limit];
bool ok = 0;

void dfs(ll node, ll val){

    if(val > 1e18){
        ok = 0;
        return;
    }
    if(ver[node].size() == 0 && val > a[node]){
        ok = 0;
        return;
    }
    
    ll newVal = max(ll(0), val - a[node]);
    if(node != 1) newVal += val;

    for(ll i = 0; i < ver[node].size(); i++){
        ll v = ver[node][i];
        dfs(v, newVal);
        // cout << newVal <<" "; 
    }
}
bool check(ll x){
    ok = 1;
    dfs(1, x);
    // cout << endl;
    if(ok) return true;
    return false;
}

int main(){
    cin >> test;
    while(test--){
        cin >> n;
        For(ll, i, 1, n)
            cin >> a[i];
        For(ll, i, 1, n - 1){
            cin >> p[i];
            ver[p[i]].push_back(i + 1);
        }

        ll first = 0, second = 2e9;
        ll res = 0; 
        while(first <= second){
            ll mid = (first + second) / 2;
            if(check(mid)){
                // cout << mid << endl;
                res = max(res, mid);
                first = mid + 1;
            }
            else second = mid - 1;
        }
        cout << res << endl;
        For(ll, i, 1, n)
            ver[i].clear();

    }
}
