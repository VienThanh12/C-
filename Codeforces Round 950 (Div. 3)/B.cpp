#include<iostream>
#include<algorithm>
using namespace std;
typedef long long ll;
#define For(type, i, a, b) for (type i = (a); i <= (b); ++i)
#define endl '\n'

ll res = 0;
ll test;
ll n, m;
string s;

int main(){
    cin >> test;
    
    while(test--){
        cin >> n;
        ll cnt_A = 0, cnt_B = 0, cnt_C = 0, cnt_D = 0, cnt_E = 0, cnt_F = 0, cnt_G = 0;
        cin >> n >> m;
        res = 0;
        cin >> s;

        For(ll, i, 0, s.length() - 1){
            if(s[i] == 'A') cnt_A ++;
            if(s[i] == 'B') cnt_B ++;
            if(s[i] == 'C') cnt_C ++;
            if(s[i] == 'D') cnt_D ++;
            if(s[i] == 'E') cnt_E ++;
            if(s[i] == 'F') cnt_F ++;
            if(s[i] == 'G') cnt_G ++;
        }
        cout << cnt_A << " " << cnt_B << " " << cnt_C << endl;
    }
}
