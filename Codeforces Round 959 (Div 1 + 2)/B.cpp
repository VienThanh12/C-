#include<iostream>
#include <stdio.h>
#include<algorithm>
using namespace std;
typedef long long ll;
#define For(type, i, a, b) for (type i = (a); i <= (b); ++i)
#define endl '\n'

ll res = 0;
ll test;
ll n;

string s, t;
const ll limit = 2e5 + 10;
ll cnt[limit];

int main(){
    cin >> test;
    while(test--){
        cin >> n;
        cin >> s >> t;
        s = '1' + s;
        t = '1' + t;
        For(ll, i, 1, s.length() - 1)
            cnt[i] = 0;
        For(ll, i, 1, s.length() - 1){
            cnt[i] = cnt[i - 1] + int(s[i]) - 48;
        }
        bool ok = true;
        for(ll i = s.length() - 1; i >= 1; i --){
            if(s[i] != t[i] && cnt[i] == 0)
                ok = false;
        }
        if(ok) cout << "YES" << endl;
        else cout <<"NO" << endl;
    }
}

//s[i] = char((int(s[i]) - 48 + int(s[0]) - 48) % 2 + 48);