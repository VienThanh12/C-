#include<iostream>
#include<algorithm>
#include<map>
using namespace std;
typedef long long ll;
#define For(type, i, a, b) for (type i = (a); i <= (b); ++i)
#define endl '\n'

ll test;
ll n, m = 1e9 + 7;
const ll limit = 2e5 + 10;
 
ll prefix[limit];
ll a[limit];

map<ll, ll> sum_x;
string s;

int main(){
    cin >> test;
    while(test--){
        cin >> s;
        prefix[0] = 0;
        For(ll, i, 0, s.length() - 1){
            a[i] = (s[i] == '0' ? 1 : -1);
            prefix[i + 1] = prefix[i] + a[i];
        }
        int ans = 0;
        For(ll, i, 0, s.length()){
            // cout << sum_x[prefix[i]] << endl;
            ans = (ans % m + ((s.length() - i + 1) % m * sum_x[prefix[i]] % m) % m) % m;
            sum_x[prefix[i]] = (sum_x[prefix[i]] % m + (i + 1) % m) % m;
        }
        cout << ans << endl;
        For(ll, i, 0, s.length()){
            a[i] = 0;
            sum_x[prefix[i]] = 0;
            prefix[i] = 0;
        }
        For(ll, i, -s.length() - 1, s.length() + 1)
            sum_x[i] = 0;
    }
}
