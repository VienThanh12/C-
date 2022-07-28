
#include <bits/stdc++.h>
#define For(type, i, a, b) for (type i = (a); i <= (b); ++i)
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

void FastIn(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
}
ll test;
ll b[limit3];
void ReadIn(){
    cin >> test;
    while(test--){
        string s;
        cin >> s;

        s = '9' + s;
        s = s  + '9';
        ll res = 0;
        bool ok;
        for(ll i = 1; i < s.length(); i++)
            b[i] = false;
        for(ll i = 1; i < s.length(); i++){
            if(s[i] == '1'){
                ok = false;
                if(s[i - 1] == '0' && b[i - 1] == false){
                    b[i - 1] = true;
                    ok = true;
                    continue;
                }
                if(s[i + 1] == '0' && b[i + 1] == false){
                    b[i + 1] = true;
                    ok = true;
                    continue;
                }
              if(ok == false)
                res++;

            }
        }
        cout << res << endl;
    }
}
int main(){
    FastIn();
    ReadIn();
}
// 100 / 35
// 2
// (100 - (35*2)) *10 / 35
// 9 010 9
