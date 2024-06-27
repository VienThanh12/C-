#include <iostream>
#include <algorithm>
#define For(i, a, b) for (int i = (a); i <= (b); ++i)
#define endl '\n'
using namespace std;

typedef long long ll;

const ll limit = 2e5 + 5;

ll test;
ll n, s;
ll x, y;

void FastIn()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
}

void ReadIn()
{
    cin >> test;
    while (test--)
    {
        cin >> x >> y;
        if (y <= -2)
            cout << "NO" << endl;
        else
            cout << "YES" << endl;
    }
}
int main()
{
    FastIn();
    ReadIn();
}