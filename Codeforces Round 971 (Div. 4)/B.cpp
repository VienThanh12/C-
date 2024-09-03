#include <iostream>
#include<algorithm>
using namespace std;

typedef long long ll;
#define For(type, i, a, b) for (type i = (a); i <= (b); ++i)
#define endl '\n'
 
ll n;
const ll limit = 1e3 + 10;
ll a[limit];
ll res = 0;

void solve() {
    cin >> n;
    string s;
    For(ll, i, 1, n){
        cin >> s;
        For(ll, j, 0, s.length() - 1){
            if(s[j] == '#'){
                a[i] = j + 1;
            }
        }
    }
    for(ll i = n; i >= 1; i --){
        cout << a[i] <<" ";
    }
    cout << endl;
    For(ll, i, 1, n){
        a[i] = 0;
    }
}
 
int main() {
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	int tt; cin >> tt; for (int i = 1; i <= tt; i++) {solve();}
}