#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
typedef long long ll;
const ll limit=1e3;
 
ll a[limit][limit];
bool b[limit][limit];
ll xx[10]={-1,-1,-1,0,0,1,1,1},yy[10]={-1,0,1,-1,1,-1,0,1};
ll res,n, m;
bool seen[limit];
ll u, v, s, x,ans,test;
ll l,r;
bool ok = false;
 
ll dfs(ll x,ll y)
{
    b[x][y] = true;
    for(ll i = 0; i <= 7; i++)
    {
        u = x + xx[i];
        v = y + yy[i];
        if(b[u][v]==false&&a[u][v] == a[x][y] &&u!=0&&v!=0&&u<=n&&v<=m) dfs(u,v);
        if(a[u][v]>a[x][y]) ok = true;
    }
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);cout.tie(0);
    cin>>n>>m;
    for(ll i = 1; i <= n; i++)
    for(ll j = 1; j <= m; j++)
    cin>>a[i][j];
 
    for(ll i = 1; i <= n; i++)
    for(ll j = 1; j <= m; j++)
    {
        ok = false;
        if(b[i][j] == false)
        {
        dfs(i,j);
        if(ok == false) res++;
        }
    }
 
    cout<<res;
}
 
//////
#include <bits/stdc++.h>
#define int long long
 
using namespace std;
 
int visited[100005];
int n;
 
vector < int > a[100005];
 
void DFS(int u){
    visited[u] = 1;
    for (int i = 0; i < a[u].size(); ++i){
        int v = a[u][i];
        if (!visited[v]){
            DFS(v);
        }
    }
}
 
signed main(){
    ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
    cin >> n;
    int m;
    cin >> m;
    while (m--){
        int u, v;
        cin >> u >> v;
        a[u].push_back(v);
        a[v].push_back(u);
    }
    int k = 0;
    for (int i = 1; i <= n; ++i){
        if (!visited[i]){
            DFS(i);
            ++k;
        }
    }
    cout << k;
    return 0;
}
