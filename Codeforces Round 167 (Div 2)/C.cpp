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
        For(ll, i, 1, n)
                cin >> a[i];
        For(ll, i, 1, n)
                cin >> b[i];

        ll good = 0, bad = 0;

        ll u = 0, v = 0;
        For(ll, i, 1, n)
        {
            if(a[i] < b[i]){
                v += b[i];
            }
            else if(a[i] > b[i]){
                u += a[i];

            }
            else if(a[i] == 1 && b[i] == 1)
                good++;
            else if(a[i] == -1 && b[i] == -1)
                bad++;
        }
        For(ll, i, 1, good){
            if(u < v){
                u ++;
            }
            else
            if(u >= v){
                v ++;
            }
        }
        For(ll, i, 1, bad){
            if(u < v){
                v --;
            }
            else
            if(u >= v){
                u --;
            }
        }
        cout << min(u, v) << endl;
    }
}
