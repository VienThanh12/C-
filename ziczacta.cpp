#include <bits/stdc++.h>
#define fi first
#define se second
#define For(type, i, a, b) for (type i = (a); i <= (b); ++i)
#define Ford(type, i, a, b) for (type i = (a); i >= (b); --i)
#define Rep(type, i, a, b) for (type i = (a); i < (b); ++i)
#define Repd(type, i, a, b) for(type i = (a); i > (b); --i)
#define endl '\n'
using namespace std;

typedef long long ll;

const ll maxN = 1e18;
const ll minN = -1e18;
const ll MOD = 1e9 + 7;

const ll limit = 1e3 + 5;
const ll limit1 = 1e4 + 5;
const ll limit2 = 2e5 + 5;
const ll limit3 = 1e6 + 5;

ll test;
ll n, m, k, x, y, u, v;
ll sum = 0, ans = 0, kd, hkd, answer;
bool ok = false;
ll a[limit3], b[limit3];

void FastIn(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
}
void ReadIn(){
    cin >> n;
    For(ll, i, 1, n)
        cin >> a[i];
    double cnt_1 = n * (n - 1) * (n - 2) / 6;
    double cnt_2 = 0;

    for(ll i = 2; i <= n - 1; i++){
        x = a[i];
        u = 0, v = 0;
        for(ll j = 1; j < i; j++)
            if(a[j] > x) u++;
        for(ll j =  i + 1; j <= n; j++)
            if(a[j] > x) v++;
        //cout << u << " " << v << endl;
        cnt_2 += u * v;
    }
       // cout <<" "<<  cnt_2 <<" " << cnt_1 << endl;
        double res = cnt_2 / cnt_1;
        printf("%0.6f", res);
}
int main(){
    FastIn();
    ReadIn();
}

