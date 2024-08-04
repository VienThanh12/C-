#include<iostream>
#include<algorithm>
using namespace std;
typedef long long ll;
#define For(type, i, a, b) for (type i = (a); i <= (b); ++i)
#define endl '\n'

ll res = 0;
ll test;
ll n;
string s;

int main(){
    cin >> test;
    while(test--){
        cin >> n;
        cin >> s;
        
        ll cnt_A = 0, cnt_B = 0, cnt_C = 0, cnt_D = 0;
        For(ll, i, 0, s.length() - 1){
            if(s[i] == 'A') cnt_A++;
            if(s[i] == 'B') cnt_B++;
            if(s[i] == 'C') cnt_C++;
            if(s[i] == 'D') cnt_D++;
        }
        cout << min(n, cnt_A) + min(n, cnt_B) + min(n, cnt_C) + min(n, cnt_D) << endl;   
    }
}
