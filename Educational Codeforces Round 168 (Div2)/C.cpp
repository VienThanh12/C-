#include<iostream>
#include<algorithm>
using namespace std;
typedef long long ll;
#define For(type, i, a, b) for (type i = (a); i <= (b); ++i)
#define endl '\n'

ll res = 0;
ll test;
ll n;
const ll limit = 2e5 + 10;
string s;
ll a[limit];

int main(){
    cin >> test;
    while(test--){
        cin >> n;
        cin >> s;
        For(ll, i, 1, n){
            if(s[i - 1] == '_') a[i] = 0;
            if(s[i - 1] == '(' ) a[i] = 1;
            if(s[i - 1] == ')') a[i] = -1;
        }
        ll res = 0;
        for(ll i = 1; i <= n; i += 2){
            if(a[i + 1] == -1){
                res ++;
            }
            if(a[i + 1] == 1){
                res += 3;
            }
        }
        cout << res << endl;
    }
}
