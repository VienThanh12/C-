#include<stdio.h>
#include<algorithm>
#include<iostream>
using namespace std;
const int limit=1e6;

int a[limit],d[limit],f[limit];
int ans=0,res=0,sum=0;
int n,m,q,l,r,x;

int main()
{
    scanf("%d %d",&n,&m);
    for(int i=1;i<=m;i++)
    {
        scanf("%d %d",&l,&r);
        a[l]++;
        a[r+1]--;
    }
    // cout << endl;
    // for(int i = 1; i <= n; i++)
    //     cout << a[i] <<" ";
    // for(int i=1;i<=n;i++) a[i]+=a[i-1];
    // cout << endl;
    for(int i = 1; i <= n; i++)
        cout << a[i] <<" ";

    sort(a+1,a+1+n);
    int j=1;
    for(int i=1;i<=n;i++)
    {
        while(j<=n&&i>a[j])
        {
            j++;
            if(i==a[j]) break;
        }
        if(n>=j)
        f[i]=n-j+1;
    }
    //for(ll i=1;i<=n;i++) cout<<d[i]
    scanf("%d",&q);
    for(int i=1;i<=q;i++)
    {
      scanf("%d",&x);
      printf("%d\n",f[x]);
    }
}
/*
d[i] là số lượng con heo có i đồng. t[i] là số lượng con heo có ít nhất i đồng (tức là >=i) t[i]=d[i]+d[i+1]+d[i+2]...d[m]
*/
    