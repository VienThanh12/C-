#define X first
#define Y second
#define pb push_back
#include<bits/stdc++.h>
using namespace std;
typedef pair < int , int > ii;
const int MAX=1e6+5,inf=0x3f3f3f3f;
int n,m;
vector < ii > pr [ MAX];
vector < vector < bool > > th;
vector < vector < int > > d;
int p1[]={0,0,1,-1};int p2[]={1,-1,0,0};
int mind[MAX];
void GO(int a1,int a2,int b1, int b2)
{
    for(int i=1;i<=n;i++){
        for(int j=1;j<=m;j++)
        {
            d[i][j]=inf;
            th[i][j]=0;
        }
    }
    memset(mind,0x3f,sizeof mind);
    queue < ii > q;
    q.push(ii(a1,a2));
    d[a1][a2]=0;
    th[a1][a2]=1;
    ii p;
    while(!q.empty())
    {
        p=q.front();
        q.pop();
        th[p.X][p.Y]=0;
        for(int i=0;i<4;i++)
        {
            ii u=ii(p.X+p1[i],p.Y+p2[i]);
            if(u.X<=n && u.X>0 && u.Y<=m && u.Y>0)
            if(d[u.X][u.Y]>d[p.X][p.Y]+1)
            {
                d[u.X][u.Y]=d[p.X][p.Y]+1;
                if(d[u.X][u.Y]<d[b1][b2] && !th[u.X][u.Y])
                {
                    q.push(u);
                    th[u.X][u.Y]=1;
                }
            }
        }
        //if(p.X*p.Y<=int(1e6))
        if(d[p.X][p.Y]<mind[p.X*p.Y]) {for(ii u:pr[p.X*p.Y])
        {
            if(d[u.X][u.Y]>d[p.X][p.Y]+3)
            {
                d[u.X][u.Y]=d[p.X][p.Y]+3;
                if(d[u.X][u.Y]<d[b1][b2] && !th[u.X][u.Y])
                {
                    q.push(u);
                    th[u.X][u.Y]=1;
                }
            }
        }
        mind[p.X*p.Y]=d[p.X][p.Y];}
    }
    cout<<d[b1][b2]<<'\n';
}
int main()
{
    ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
 //   freopen("covid19.inp","r",stdin);
   // freopen("covid19.out","w",stdout);
    int x, y, s, t, T;
    cin>>n>>m>>T;
 
    d.resize(n+1,vector < int > (m+1));
    th.resize(n+1,vector < bool > (m+1));
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=m;j++)
        {
            cin>>x;
            pr[x].pb(ii(i,j));
        }
    }
    for(int i=1;i<=T;i++)
    {
        cin>>x>>y>>s>>t;
        GO(s,t,x,y);
    }
}
