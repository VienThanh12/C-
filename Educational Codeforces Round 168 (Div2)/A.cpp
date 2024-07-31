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

ll seen[150];
int main(){
    cin >> test;
    while(test--){
        cin >> s;
        For(ll, i, 97, 122)
            seen[i] = 0;
        For(ll, i, 0, s.length() - 1){
            seen[int(s[i])]++;
        }

        char res;
        For(ll, i, 97, 122){
            if(seen[i] == 0){
                res = char(i);
                break;
            }
        }
        cout << s[0];
        if(s.length() == 1){
            cout << res << endl;
            continue;
        }
        For(ll, i, 1, s.length() - 1){
            if(s[i] == s[i - 1] && res != '1'){
                cout << res;
                res = '1';
            }
            cout << s[i];
        }
        if(res != '1'){
            cout << res << endl;
            continue;
        }
        cout << endl;
    }
}
