#include <iostream>
#include <algorithm>
using namespace std;
typedef long long ll;
#define For(type, i, a, b) for (type i = (a); i <= (b); ++i)
#define endl '\n'
 
ll res = 0;
ll test;
ll n;
ll x, y;
 
const ll limit = 2e5 + 10;
 
ll a[limit];
ll b[limit];
ll u, v;
 
int main()
{
    cin >> test;
    while (test--)
    {
        cin >> n;
        u = 0;
        v = 0;
        
        For(ll, i, 1, n)
        {
            cin >> a[i];
            u += a[i];
        }
        For(ll, i, 1, n)
        {
            cin >> b[i];
            v += b[i];
        }
        For(ll, i, 1, n)
        {
            if (u < v)
            {
                if (a[i] == -1)
                {
                    u += 1;
                }
                else if (a[i] == 0 && b[i] == -1)
                {
                    u += 0;
                    v += 1;
                }
                else if (a[i] == 1)
                {
                    v -= b[i];
                }
            }
            else if (u > v)
            {
                if (b[i] == -1)
                {
                    v += 1;
                }
                else if (b[i] == 0 && a[i] == -1)
                {
                    v += 0;
                    u += 1;
                }
                else if (b[i] == 1)
                {
                    u -= b[i];
                }
            }
            else if (v == u)
            {
                if (a[i] == 0 && b[i] == -1)
                {
                    v++;
                }
                else if (a[i] == -1 && b[i] == 0)
                {
                    u++;
                }
                else
                {
                    u -= a[i];
                }
            }
        }
        cout << min(u, v) << endl;
    }
}
