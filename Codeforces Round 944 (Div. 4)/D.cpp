#include <iostream>
#include<algorithm>
using namespace std;

typedef long long ll;
#define For(type, i, a, b) for (type i = (a); i <= (b); ++i)
#define endl '\n'
 
string s;

void solve() {
	cin >> s;
    ll res = 1;
    if(s.length() == 1){
        cout << 1 << endl;
        return;
    }
    For(ll, i, 1, s.length() - 1){
        if(s[i - 1] > s[i])
            res++;
    }
    cout << res << endl;
}
 
int main() {
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	int tt; cin >> tt; for (int i = 1; i <= tt; i++) {solve();}
}