#include<iostream>
#include<algorithm>
using namespace std;
typedef long long ll;
#define For(type, i, a, b) for (type i = (a); i <= (b); ++i)
#define endl '\n'

ll test;
ll n;
const ll limit = 2e5 + 10;
ll dp[25][limit];

string s, t;
int main(){
    cin >> test;
    while(test--){
        cin >> s >> t;

        ll pos = 0;
        For(ll, i, 0, s.length() - 1){
            if(s[i] == t[pos] && pos < t.length()){
                pos++;
            }
            else if(s[i] == '?'){
                if(pos < t.length()){
                    s[i] = t[pos];
                    pos++;
                }
                else s[i] = 'a';
            }
        }

        if(pos == t.length()){
            cout << "YES" << endl;
            cout << s << endl;
        }
        else cout << "NO" << endl;
    }
}
