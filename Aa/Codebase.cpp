#include <iostream>
#include<algorithm>
using namespace std;

typedef long long ll;
#define For(type, i, a, b) for (type i = (a); i <= (b); ++i)
#define endl '\n'
 
void solve() {
    string s;

	cin >> s;
    string t;
    if(s.length() == 1){
        cout << "NO" << endl;
        return;
    }
    For(ll, i, 0, s.length() - 2){
        t += s[i + 1];
    }
    t += s[0];
    if(t == s){
        cout << "NO" << endl;
    }
    else {
        cout <<"YES" << endl;
        cout << t << endl;
    }
}
 
int main() {
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	int tt; cin >> tt; for (int i = 1; i <= tt; i++) {solve();}
}