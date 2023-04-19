// Segment Tree
#include<iostream>
#include<algorithm>
using namespace std;
typedef long long ll;
const ll limit = 4*1e5;
 
ll res = 0,ans = 0,cnt = 0;
ll m[limit],leaf[limit];
ll a[limit];
ll n,q,test;
ll u,v,k;
ll x,y;
 
ll built_tree(ll x,ll l,ll r)
{
    if(l > r) return 0;
    if(l == r)
    {
        m[x] = a[l];
        leaf[l] = x;
        //cout << m[x] <<" "<< a[l] << endl;
    }
    if(l < r)
    {
        ll mid = (l + r)/2;
        built_tree(2*x,l,mid);
        built_tree(2*x+1,mid+1,r);
        m[x] = max(m[2*x],m[2*x+1]);
    }
}
ll update(ll k,ll w)
{
    ll x = leaf[k];
    m[x] += w ;
    for(x /= 2; x > 0; x /= 2)
        m[x] = m[2*x] + m[2*x+1];
 
}
ll request(ll x,ll l,ll r,ll u, ll v)
{
    if(r < u || v < l) return -1e18; // truong hop khong giao nhau
    if(u <= l && r <= v) return m[x]; // truong hop giao
    ll mid = (l+r) /2;
    return max(request(2*x,l,mid,u,v),request(2*x+1,mid+1,r,u,v));
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);cout.tie(0);
    cin >> n >> q;
    built_tree(1,1,n); // nut 1 quan ly tu 1 den n
    for(ll i = 1; i <= q; i++)
    {
        cin >> x >> y >> k;
        a[x] = a[x]+k;
        a[y+1] = a[y+1]-k;
    }
    for(int i = 2; i <= n;i++)
        a[i] = a[i-1]+a[i];
    built_tree(1,1,n);
    cin >> test;
    for(ll i = 1; i <= test; i++)
    {
        cin >> u >> v;
        cout << request(1,1,n,u,v) << endl;
    }
}
