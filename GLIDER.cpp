#include<iostream>
#include<algorithm>
using namespace std;
typedef long long ll;
const ll  limit = 1e6;

pair<ll,ll> a[limit];
ll f[limit],b[limit];
ll res = 0,ans = 0,sum = 0,cnt = 0;
ll n,h;
ll temp;
ll u,v;
ll first,second,mid;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);cout.tie(0);
    cin >> n >> h;
    ans = h;
    for(ll i = 1; i <= n; i++)
    {
        cin >> a[i].first >> a[i].second;
        if(i >= 2)
        f[i-1] = a[i].first - a[i-1].second + f[i-2];
        b[i] = a[i].second - a[i].first + b[i-1]; 
    }

    b[0] = 0;
    f[0] = 0;
    ll j = 1;

    

    for(ll i = 1; i <= n; i++)
    {
        h = ans;
        sum = 0;
        temp = f[i-1];
        while(f[j]- temp < h && j <= n-1) j++;
        h -= b[j-1];
        sum = b[j] - b[i-1] + h + b[j-1];

        res = max(sum,res);
    }
    cout << res;
}
    
