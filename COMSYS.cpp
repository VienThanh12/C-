#include <iostream>
#include <vector>
using namespace std;        
typedef long long ll;
const ll limit = 1e4 + 6;

ll tick[limit][limit];
vector<ll> a[limit];
vector<ll> st;
ll num[limit]; // thứ tự duyệt dfs
ll low[limit]; // là nút thấp nhất mà nút i tới được
ll seen[limit];
ll res = 0, ans = 0, sum = 0, cnt = 0;
ll n, m;
ll u, v;
// liên thông mạnh tức từ (u,v) luôn có đường đi

void tarjan(ll u)
{
    ll v;
    num[u] = low[u] = ++ cnt; // ban đầu thì low[u] lun bằng gốc num[u];
    st.push_back(u);

    for (int i = 0; i < a[u].size(); i++)
    {
        v = a[u][i];
        if(num[v] == -1) 
        {
            tarjan(v);
            low[u] = min(low[u], low[v]);
        }
        if(num[v] != -1) low[u] = min(low[u], num[v]); 
    }
        if (num[u] == low[u])
        {
            // cout << u << endl;
            res ++;
            while (1) 
            {
                ll v = st.back(); st.pop_back();
                low[v] = num[v] = 1e4+10;
                if (u == v) break;
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
    }
    for(ll i = 1; i <= n; i++) num[i] = -1;
    for (ll i = 1; i <= n; i++)
        if (num[i] == -1) tarjan(i);
    cout << res;
}
    
