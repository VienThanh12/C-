#include <iostream>
#include<algorithm>
using namespace std;

typedef long long ll;
#define For(type, i, a, b) for (type i = (a); i <= (b); ++i)
#define endl '\n'
 
const ll limit = 1e3 + 10;
ll a[limit], cnt[limit];
ll n, k;
void solve() {
	cin >> n >> k;
    For(ll, i, 1, n){
        cin >> a[i];
        cnt[a[i]]++;
    }
    ll res = n;
    For(ll, i, 1, n){
        if(cnt[a[i]] >= k){
            res = min(res, k - 1);
        }
    }
    cout << res << endl;
    For(ll, i, 1, n)
        cnt[a[i]] = 0;
}   
 
int main() {
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	int tt; cin >> tt; for (int i = 1; i <= tt; i++) {solve();}
}