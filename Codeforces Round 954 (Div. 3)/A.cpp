#include <iostream>
#include <algorithm>
using namespace std;
typedef long long ll;
#define For(type, i, a, b) for (type i = (a); i <= (b); ++i)
#define endl '\n'

ll res = 0;
ll test;
ll n;

ll a, b, c;

int main()
{
    cin >> test;
    while (test--)
    {
        cin >> a >> b >> c;
        ll res = 1e8;

        For(ll, i, -200, 200)
            res = min(res, abs(a - i) + abs(b - i) + abs(c - i));
        cout << res << endl;
    }
}
