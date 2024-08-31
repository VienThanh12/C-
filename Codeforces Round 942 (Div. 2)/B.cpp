#include <iostream>
#include<algorithm>
using namespace std;

typedef long long ll;
#define For(type, i, a, b) for (type i = (a); i <= (b); ++i)
#define endl '\n'
 
const ll limit = 2e5 + 10;

ll a[limit];

ll n, m, res = 0;

void solve() {
	cin >> n >> m;
    ll max_num = 0;
    For(ll, i, 1, n){
        cin >> a[i];
        max_num = max(max_num, a[i]);
    }
    char sign;
    ll l, r;
    while(m--){
        cin >> sign >> l >> r;
        if(sign == '+'){
            if(l <= max_num && r >= max_num){
                max_num ++;
            }
        }
        if(sign == '-'){
            if(l <= max_num && r >= max_num){
                max_num --;
            }
        }
        cout << max_num <<" ";
    }
    cout << endl;
}
 
int main() {
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	int tt; cin >> tt; for (int i = 1; i <= tt; i++) {solve();}
}