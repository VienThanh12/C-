#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

ll a[2000005], b[2000005], f[2000005];
unordered_map<ll, ll> cnt;
ll n, res;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    cin >> n;

    for (ll i = 1; i <= n; i++)
    {
        cin >> a[i];
        b[i] = a[i] + i;
        f[i] = i - a[i];
    }

    for (ll i = 1; i <= n; i++)
        cnt[f[i]]++;

    for (ll i = 1; i <= n; i++)
        res += cnt[b[i]];

    cout << res;
}

