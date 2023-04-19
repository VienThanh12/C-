#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
typedef long long ll;
const ll limit=1e5+2;
vector<ll> a[limit];
 
ll f[limit];
ll res,n, m;
bool seen[limit];
ll q[limit],cnt[limit];
ll u, v, s, x,ans,test;
ll l,r;
pair<ll,ll> out[limit];
 
void BFS(ll s)
{
    l = r = 1;
    seen[s]=true;
    q[1] = s;
    cnt[s] = 0;
    while(l<=r)
    {
        u = q[l];
        l++;
        for(ll i = 0; i < a[u].size(); i++)
           {
               v = a[u][i];
               if(seen[v] == false )
               {
               r++;
               q[r] = v;
               seen[v] = true;
               cnt[v] = cnt[u]+1;;
               }
           }
    }
}
 
int main()
{
    cin >> n >> m >> s;
 
    for (ll i = 1; i <= m; i++)
    {
        cin >> u >> v;
        a[u].push_back(v);
        a[v].push_back(u);
    }
 
    BFS(s);
 
    for(ll i = 1; i <= n; i++) out[i].second = i;
 
    for(ll i = 1; i <= n; i++) out[i].first = cnt[i];
 
    sort(out+1,out+1+n);
 
    for(ll i = 1; i <= n; i++)
    {
        if(out[i].first != 0 || out[i].second == s)
        cout << out[i].second <<" "<< out[i].first<<endl;
    }
}
