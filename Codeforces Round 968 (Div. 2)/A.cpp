#include <iostream>
#include<algorithm>
using namespace std;

typedef long long ll;
#define For(type, i, a, b) for (type i = (a); i <= (b); ++i)
#define endl '\n'

ll n;
string s;

void solve() {
    cin >> n;
	cin >> s;
    if(s[0] == s[n - 1]){
        cout <<"NO" << endl;
    }
    else {
        cout <<"YES" << endl;
    }
}
 
int main() {
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	int tt; cin >> tt; for (int i = 1; i <= tt; i++) {solve();}
}

// 8p