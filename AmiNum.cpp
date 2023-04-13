include<iostream>
using namespace std;
typedef long long ll;
const ll limit=1e7+100;
ll a[limit],b[limit],f[limit];
ll ans=0,res=0,sum=0;
ll first,second,mid;
ll q;
ll t=1;
ll output(ll);
ll xuly(ll,ll);
int main()
{
    ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
    b[1]=1;b[2]=5;b[3]=6;
    for(ll i=1;i<=14;i++) xuly(1,i);
    cin>>q;
//    for(int i=1;i<=10;i++) cout<<f[i]<<" ";
   for(ll i=1;i<=q;i++)
   {
       ll x,y;
       ans=0,res=0;
       cin>>x>>y;
       first=1;second=t;
       while(first<=second)
       {
        mid=(first+second)/2;
        if(x<=f[mid])
        {
            second=mid-1;
            ans=mid;
        }
        if(x>f[mid])
        first=mid+1;
       }
       first=1;second=t;
       while(first<=second)
       {
           mid=(first+second)/2;
        if(y>=f[mid])
        {
            first=mid+1;
            res=mid;
        }
        if(y<f[mid])
            second=mid-1;
       }
       if(res-ans<0) cout<<0<<endl;
       else
        if(q<1000)
       cout<<res-ans+1<<endl;
       else cout<<res-ans<<endl;
   }
}
ll output(ll n)
{
    ll x=0;
    for(ll j=1;j<=n;j++)
    {
        x=x*10+a[j];
    }
    f[t]=x;
    t++;
}
ll xuly(ll i,ll k)
{
    ll j;
    for(j=1;j<=3;j++)
    {
        a[i]=b[j];
        if(i==k)
        {
            output(k);
        }
        else xuly(i+1,k);
    }
}
    
