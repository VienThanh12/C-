#include<iostream>
#include<vector>
#include<algorithm>
#include<string.h>
using namespace std;
typedef long long ll;
const ll limit = 2*1e5+1;
    
ll res = 1e17, ans = 0,sum = 0;
vector<ll> a;
pair<ll,ll> b[limit];
pair<ll,ll> k[limit];
vector<ll> f[limit];
ll val[limit],seen[limit];
ll m,s,t;
ll u,v;
ll x,y;
ll first,second,mid;
ll l,r;
ll maxn;

ll binarysearch(ll x)
{
    l = 0;
    r = a.size()-1;
    while(l <= r)
    {
        mid = (l+r)/2;
        if(a[mid] == x) return  val[mid];
        if(a[mid] < x) l = mid +1;
        if(a[mid] > x) r = mid-1;
    }
    return val[mid];
}

ll dfs(ll u)
{
    seen[u] = true;
    for(ll i = 0; i < f[u].size(); i++)
    {
        v = f[u][i];
        if(seen[v] == false) dfs(v); 
    }
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);

    cin >> m >> s >> t;
    for(ll i = 1; i <= m; i++)
    {
        cin >> u >> v;
        a.push_back(u);
        a.push_back(v);
        b[i].first = u;
        b[i].second = v;
    }
    sort(a.begin(),a.end());
    x = 1;
    val[0] = 1;
    
    for(ll i = 1; i < a.size(); i++)
    {
        if(a[i] != a[i-1]) x++;
        val[i] = x; 
    }

    s = binarysearch(s);
    t = binarysearch(t);

    for(ll i = 1; i <= m; i++)
    {
        x = b[i].first;
        y = b[i].second;
        u = binarysearch(x);
        v = binarysearch(y);
        k[i].first = u;
        k[i].second = v;
     //   cout << u <<" " << v << endl;
    }

    l = 0;
    r = 2*m+1;
    while(l <= r)
    {
       // cout << 1 <<endl;
        mid = (l+r)/2;

        for(ll i = 1; i <= mid; i++) 
        f[k[i].first].push_back(k[i].second);
        
        //cout << mid;
        dfs(s);

        for(ll i = 1; i <= mid; i++) f[k[i].first].clear();
        
        if(seen[t] == true) 
        {
            r = mid-1;
            res = min(res,mid);
          //  cout << mid << endl;
        }

        if(seen[t] == false) l = mid+1;

        memset(seen,false,sizeof(seen));
    }
    if(res == 1e17) 
    {
        cout << 0;
        return 0;
    }
    cout << res;
}
