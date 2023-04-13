#include<iostream>
#include<cmath>
#include<algorithm>
using namespace std;
typedef long long ll;

ll res = 0,ans = 0,sum = 0,cnt = 0;
ll a,b,c,d;
int x = 0,y = 0;
ll u,v;
ll t1,t2;

int gcd(int a, int b, int & x, int & y) {
    if (a == 0) {
        x = 0;
        y = 1;
        return b;
    }
    int x1, y1;
    int d = gcd(b % a, a, x1, y1);
    x = y1 - (b / a) * x1;
    y = x1;
    return d;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);cout.tie(0);
    ll test;
    cin >> test;
    while(test--){
    cin >> a >> b >> c;
    ll kd = 0;
    d = gcd(a,b,x,y);
    if(c % d != 0)
		{
			cout << 0 << endl;
			continue;
		}
    if(c % b == 0 && c != 0) kd++;
    if(c % a == 0 && c != 0) kd++;
	if(c == 0) kd++;
	t1 = ceil(-1.0*c*x/b);
    if (c*x % b == 0) t1++;
    t2 = floor(1.0*c*y/a);
    if (c*y % a == 0) t2--;
    if (t1 <= t2) cout << t2-t1+1 + kd << '\n';
    else cout << 0 + kd <<'\n';
    }
}
    
