#include <iostream>
#include<algorithm>
using namespace std;

typedef long long ll;
#define For(type, i, a, b) for (type i = (a); i <= (b); ++i)
#define endl '\n'
 
ll a[3];

void solve() {
	cin >> a[1] >> a[2] >> a[3];
    if((a[1] + a[2] + a[3]) % 2 != 0){
        cout <<"-1" << endl;
        return;
    }
    ll res = 0;
    while(a[2] > 0){
        res ++;
        a[3]--;
        a[2]--;
        sort(a + 1, a + 1 + 3);
    }
    cout << res << endl;
 }
 
int main() {
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	int tt; cin >> tt; for (int i = 1; i <= tt; i++) {solve();}
}