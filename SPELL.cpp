#include <bits/stdc++.h>
#define fi first
#define se second
#define For(type, i, a, b) for (type i = (a); i <= (b); ++i)
#define endl '\n'
using namespace std;

typedef long long ll;
const ll maxN = 1e18;
const ll minN = -1e18;
const ll MOD = 1e9 + 7;

const ll limit = 500;
const ll limit1 = 1e4 + 5;
const ll limit2 = 2e5 + 5;
const ll limit3 = 1e6 + 5;

ll m, n, test;
ll res = 0;
ll a[limit][limit];
ll b[limit3];
ll c[limit][limit];
string s;
char t;

void FastIn(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
}



void ReadIn(){
    freopen("SPELL.INP","r",stdin);
    freopen("SPELL.OUT","w",stdout);
    cin >> m >> n >> test;
    For(ll, i, 1, test){
        cin >> t;
        b[i] = long(t);
    }
    For(ll, i, 1, m)
        For(ll, j, 1, n){
            cin >> t;
            a[i][j] = long(t);
        }
    /*
    For(ll, i, 1, test)
        cout << b[i] << " ";
    cout << endl;
    For(ll, i, 1, m){
        cout << endl;
        For(ll, j, 1, n){
            cout << a[i][j] <<" ";
        }
    }
    */
    res = 1e12;
    For(ll, k, 2, test){
        For(ll, i, 1, m){
            For(ll, j, 1, n){
                if(a[i][j] == b[k]){
                //     cout << 1 << endl;
                    ll ans = 1e9;
                    For(ll, u, 1, m)
                        For(ll, v, 1, n){
                            if(a[u][v] == b[k - 1]){
                            //    ll ans = 1e9;
                                if(abs(i - u) + abs(v - j) != 0){
                                    if(a[u][v] == a[i][j])
                                        ans = min(ans, abs(i - u) + abs(j - v) + c[i][j]);
                                    if(a[u][v] != a[i][j])
                                        ans = min(ans, abs(i - u) + abs(j - v) + c[u][v]);
                                }
                            }
                        }
                c[i][j] = ans;
                if(k == test)
                    res = min(res, c[i][j]);
                }
            }
        }
        /*
        For(ll, u, 1, m){
                    cout << endl;
                    For(ll, v, 1, n)
                        cout << c[u][v] << " ";
                    }
                 cout << endl;
        */
    }
    cout << res + 1;
}
int main(){
    FastIn();
    ReadIn();
}
