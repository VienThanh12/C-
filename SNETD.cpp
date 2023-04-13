#include <iostream>
#include <vector>
using namespace std;
typedef long long ll;
const ll limit = 1e6 + 6;

vector<ll> a[limit];
ll num[limit];
ll low[limit];
ll seen[limit];
ll res = 0, ans = 0, sum = 0, cnt = 0;
ll n, m;
ll u, v;
ll nhanh,khop,cau;

void tarjan(ll u,ll p)
{
    ll v,i;
    num[u] = low[u] = ++ cnt;
    for (int i = 0; i < a[u].size(); i++)
    {
        v = a[u][i];
        if(v != p)
        {
        if ( num[v] >0 ) low[u] = min(low[u], num[v]);
        else
        {
            tarjan(v,u);
            low[u] = min(low[u],low[v]);
            if(low[v] > num[u]) cau++;

        }
        }
    }
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    cin >> n >> m;
    for (ll i = 1; i <= m; i++)
    {
        cin >> u >> v;
        a[u].push_back(v);
        a[v].push_back(u);
    }
    for(ll i = 1; i <= n; i++) num[i] = 0;
    for (ll i = 1; i <= n; i++)
        if (num[i] == 0) tarjan(i,i);
    cout <<m-cau;
}
    
