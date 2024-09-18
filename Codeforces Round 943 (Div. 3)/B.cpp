#include <iostream>
#include<algorithm>
using namespace std;

typedef long long ll;
#define For(type, i, a, b) for (type i = (a); i <= (b); ++i)
#define endl '\n'
 
ll n, m;

string s, t;

void solve() {
	cin >> n >> m;
    cin >> s >> t;
    ll pos = 0;
    For(ll, i, 0, t.length() - 1){
        if(s[pos] == t[i]){
            pos++;
        }
    }
    cout << pos << endl;
}
 
int main() {
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	int tt; cin >> tt; for (int i = 1; i <= tt; i++) {solve();}
}