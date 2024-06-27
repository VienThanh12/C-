#include <iostream>
#include <algorithm>
using namespace std;
typedef long long ll;
#define For(type, i, a, b) for (type i = (a); i <= (b); ++i)
#define endl '\n'

ll test;
string a, b;

ll dp[305][305];
ll cnt, res, sum, kd;

int main()
{
    cin >> test;
    while (test--)
    {
        res = 0;
        cin >> a >> b;
        For(ll, i, 0, a.length() - 1)
        {
            For(ll, j, 0, b.length() - 1)
            {
                cnt = 0;
                ll u = i, v = j;
                while (a[u] == b[v] && u < a.length() && v < b.length())
                {
                    cnt++;
                    u++;
                    v++;
                }
                res = max(res, cnt);
            }
        }
        For(ll, i, 0, b.length())
            For(ll, j, 0, a.length())
                dp[i][j] = 0;

        kd = 0;
        a = '0' + a;
        b = '0' + b;
        For(ll, i, 1, b.length() - 1)
        {
            For(ll, j, 1, a.length() - 1)
            {
                if (b[i] == a[j])
                {
                    dp[i][j] = max(dp[i][j], dp[i - 1][j - 1] + 1);
                    kd = max(kd, dp[i][j]);
                }
                else
                    dp[i][j] = dp[i][j - 1];
            }
        }
        // For(ll, i, 1, b.length() - 1)
        // {
        //     cout << endl;
        //     For(ll, j, 1, a.length() - 1)
        //             cout
        //         << dp[i][j] << ' ';
        // }
        // cout << res << endl;
        //  cout << a.length() + b.length() - res << endl;
        cout << a.length() + b.length() - kd - 2 << endl;
    }
}
