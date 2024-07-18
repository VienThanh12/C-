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
        ll cnt_0 = 0, cnt_1 = 0;
        For(ll, i, 0, s.length() - 1){
            if(s[i] == '1') cnt_1 ++;
        }
        s = '1' + s;
        For(ll, i, 1, s.length() - 1){
           if(s[i - 1] == '1' && s[i] == '0')
            cnt_0 ++; 
        }
        if(cnt_1 > cnt_0)
            cout << "Yes" << endl;
        else cout <<"No" << endl;
    }
}
