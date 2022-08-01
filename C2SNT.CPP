#include<iostream>
#include<algorithm>
using namespace std;
typedef long long ll;
ll a,b,n;
ll res=0,ans=0;
int main()
{
    cin >>a>>b>>n;
    n%=(b-1);
    for(int i=1;i<=n+1;i++)
    {
        res=a/b;
        a%=b;
        a*=10;
    }
    cout <<res;
}
