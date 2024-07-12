#include<iostream>
#include<algorithm>
using namespace std;
typedef long long ll;
#define For(type, i, a, b) for (type i = (a); i <= (b); ++i)
#define endl '\n'

ll res = 0;
ll test;
ll n, m, k;

const ll limit = 2e5 + 10;
ll a[limit];

int main(){
    cin >> test;
    while(test--){
        cin >> n >> m >> k;

        for(ll i = n; i >= k; i--)
            cout << i << ' ';
        for(ll i = m + 1; i < k; i++)
            cout << i << ' ';
        for(ll i = 1; i <= m; i++)
            cout << i << ' ';
        cout << endl;
    }
}
