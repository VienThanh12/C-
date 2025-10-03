#include <bits/stdc++.h>
#define For(type, i, a, b) for (type i = (a); i <= (b); ++i)
#define endl '\n'
using namespace std;

typedef long long ll;
typedef pair<int,int> pii;

const int limit = 1010;
int w, h;
int a[limit][limit];
int dista[limit][limit];
bool reach[limit][limit];
string k;
int L;

int dx[4] = {-1, 1, 0, 0};
int dy[4] = {0, 0, 1, -1};

int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);

    cin >> w >> h;
    int u,v;
    For(int, i, 1, h){
        For(int, j, 1, w){
            char s; cin >> s;
            if(s=='#') a[i][j]=1;
            if(s=='.') a[i][j]=2;
            if(s=='S'){ a[i][j]=3; u=i; v=j; }
        }
    }
    cin >> k;
    L = k.size();

    const int INF=1e9;
    For(int, i,1,h) For(int, j,1,w) dista[i][j]=INF;

    queue<pii> q;
    q.push({u,v});
    dista[u][v]=0;
    while(!q.empty()){
        auto [x,y]=q.front(); q.pop();
        for(int d=0; d<4; d++){
            int nx=x+dx[d], ny=y+dy[d];
            if(1<=nx&&nx<=h&&1<=ny&&ny<=w&&(a[nx][ny]==2||a[nx][ny]==3)&&dista[nx][ny]==INF){
                dista[nx][ny]=dista[x][y]+1;
                q.push({nx,ny});
            }
        }
    }

    vector<vector<pii>> layer(L+1);
    layer[0].push_back({u,v});
    reach[u][v]=true;

    for(int step=0; step<L; step++){
        for(auto [x,y]:layer[step]){
            for(int d=0; d<4; d++){
                if(k[step]=='N'&&d==0) continue;
                if(k[step]=='S'&&d==1) continue;
                if(k[step]=='E'&&d==2) continue;
                if(k[step]=='W'&&d==3) continue;
                int nx=x+dx[d], ny=y+dy[d];
                if(1<=nx&&nx<=h&&1<=ny&&ny<=w&&(a[nx][ny]==2||a[nx][ny]==3)&&dista[nx][ny]==step+1&&!reach[nx][ny]){
                    reach[nx][ny]=true;
                    layer[step+1].push_back({nx,ny});
                }
            }
        }
    }

    For(int, i,1,h){
        For(int, j,1,w){
            if(a[i][j]==1) cout<<"#";
            else if(a[i][j]==2){
                if(dista[i][j]==L && reach[i][j]) cout<<"!";
                else cout<<".";
            }else if(a[i][j]==3) cout<<"S";
        }
        cout<<endl;
    }
}

