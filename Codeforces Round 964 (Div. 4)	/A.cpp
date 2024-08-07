#include<iostream>
#include<algorithm>
using namespace std;
typedef long long ll;
#define For(type, i, a, b) for (type i = (a); i <= (b); ++i)
#define endl '\n'

ll res;
ll test;
ll n;
string s;
int main(){
    cin >> test;
    while(test--){
        cin >> s;
        cout << int(s[0] - 48) + int(s[1] - 48) << endl;
    }
}
