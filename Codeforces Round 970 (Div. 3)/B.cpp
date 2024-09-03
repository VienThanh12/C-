#include <iostream>
#include<algorithm>
using namespace std;

typedef long long ll;
#define For(type, i, a, b) for (type i = (a); i <= (b); ++i)
#define endl '\n'
 
ll n;
string s;
const ll limit = 2e5 + 10;

ll seen[limit];


void solve() {
    cin >> n;
    cin >> s;
    bool ok = false;
    ll temp = 1;
    For(ll, i, 0, n){
        if(i * i == n){
            temp = i;
            ok = true;
        }
    }
    
    For(ll, i, 2, temp - 1){
        For(ll, j, 2, temp - 1){
            ll kd = (i - 1) * temp + j;
            seen[kd - 1] = 1;
            if(s[kd - 1] != '0'){
                ok = false;
                // cout << (i - 1) * temp + j  << endl;
                // cout << s[kd - 1] << endl;
                // cout << i << " " << j << endl;
            }
        }
    }

    For(ll, i, 0, s.length() - 1){
        if(seen[i] == 0 && s[i] == '0'){
            // cout << i << endl;
            ok = false;
        }
    }
    ok == true ? cout <<"Yes" << endl : cout << "No" << endl; 
    For(ll, i, 0, s.length()){
        seen[i] = 0;
    }
}
 
int main() {
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	int tt; cin >> tt; for (int i = 1; i <= tt; i++) {solve();}
}