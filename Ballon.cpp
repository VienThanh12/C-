#include<stdio.h>
#include<iostream>
#include<algorithm>
#include<vector>

using namespace std;

#define X first
#define Y second

typedef long long ll;
typedef  pair<ll,ll> ii;
const ll limit=2e6;
vector<ii> a[limit];
long long mp[limit];

long long k=-1,n,u,v,i,l,r;

void dfs(long long x,long long y)
{
    ll vt=y;
    k++;mp[k]=x;
    if(k>r) return;
    //cout<<x<<"\n";
    //if (x==2) cout << x << " " << y << "\n";
    ll tt=a[x].size();
    for(long j=tt-1;j>=0;j--)
    {
        ll u=a[x][j].X;
        ll v=a[x][j].Y;
        if (v<vt) break;
        dfs(u,v);
        // vt=v;
    }
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);cout.tie(0);
    cin>>n>>l>>r;
    ll u,v;
    for(ll i=1;i<=n;i++)
    {
        cin>>u>>v;
        a[u].push_back(ii(v,i));
    }
    dfs(0,0);
    for(ll i=l;i<=r-1;i++)
    {
        //cout<<mp[i]<<endl;
        cout<<mp[i%(k+1)]<<" ";
    }
    }
    
