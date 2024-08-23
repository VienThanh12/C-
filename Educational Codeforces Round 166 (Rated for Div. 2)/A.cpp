#include <iostream>
#include<algorithm>
using namespace std;
 
typedef long long ll;
#define For(type, i, a, b) for (type i = (a); i <= (b); ++i)
#define endl '\n'
 
string s;
 
ll n;
 
void solve() {
    cin >> n;
 
	cin >> s;
    bool ok = true;
    For(ll, i, 0, s.length() - 1){
        if(s[i] >= 48 && s[i] <= 57 || s[i] >= 97 && s[i] <= 122){
        }
        else {
            ok = false;
        }
    }
    For(ll, i, 1, s.length() - 1){
        if(s[i - 1] > s[i]){ // remember this one, out of bounce if we go from 0 -> s.length - 2 if(s[i] > s[i + 1])
            ok = false;
        }
    }
    bool letter_on = false;
    For(ll, i, 0, s.length() - 1){
        if(s[i] >= 97 && s[i] <= 122){
            letter_on = true;
        }
        if(letter_on){
            if(s[i] >= 48 && s[i] <= 57)
                ok = false;
        }
    }
    ok ? cout << "YES" << endl : cout << "NO" << endl;
}
 
int main() {
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	int tt; cin >> tt; for (int i = 1; i <= tt; i++) {solve();}
}