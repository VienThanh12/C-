#include <iostream>
#include<algorithm>
#include<vector>
using namespace std;

typedef long long ll;
#define For(type, i, a, b) for (type i = (a); i <= (b); ++i)
#define endl '\n'
 
ll n;
string s;

vector<ll> r;
const ll limit = 2e5 + 10;

ll seen[limit];
ll convert[limit];

void solve() {
    cin >> n;
    cin >> s;
    r.clear();
	For(ll, i, 0, s.length() - 1){
        if(!seen[s[i]]){
            r.push_back(ll(s[i]));
            seen[s[i]] = 1;
        }
    }
    sort(r.begin(), r.end());
    ll kd = r.size() - 1;
    For(ll, i, 0, r.size() - 1){
        convert[r[i]] = r[kd];
        kd --;
    }
    For(ll, i, 0, s.length() - 1){
        cout << char(convert[s[i]]);
    }
    cout << endl;
    For(ll, i, 0, s.length() - 1){
        seen[s[i]] = 0;
        convert[s[i]] = 0;
    }
}
 
int main() {
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	int tt; cin >> tt; for (int i = 1; i <= tt; i++) {solve();}
}