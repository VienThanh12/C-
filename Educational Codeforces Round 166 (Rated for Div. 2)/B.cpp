#include <iostream>
#include<algorithm>
using namespace std;

typedef long long ll;
#define For(type, i, a, b) for (type i = (a); i <= (b); ++i)
#define endl '\n'
 
const ll limit = 2e5 + 10;

ll a[limit], b[limit];
ll n;

void solve() {
    cin >> n;
    For(ll, i, 1, n)
        cin >> a[i];
    For(ll, i, 1, n + 1)
        cin >> b[i];
	
    ll res = 0, ans = 0, kd = 1e18;
    ll find_n = b[n + 1];

    For(ll, i, 1, n){
        res += abs(a[i] - b[i]);
        if(a[i] > b[i]){
            if(a[i] < find_n){
                kd = min(kd, find_n - a[i]);
            }
            if(a[i] >= find_n && b[i] <= find_n){
                kd = 0;
            }
            if(b[i] > find_n){
                kd = min(kd, b[i] - find_n);
            }
        }
        if(a[i] == b[i]){
            kd = min(kd, abs(find_n - a[i]));
        } 
        if(a[i] < b[i]){
            if(find_n < a[i]){
                kd = min(kd, a[i] - find_n);
            }
            if(a[i] <= find_n && find_n <= b[i]){
                kd = 0;
            }
            if(b[i] < find_n){
                kd = min(kd, find_n - b[i]);
            }
        }
    }
    // cout << kd << endl;
    cout << res + kd + 1 << endl;
}
 
int main() {
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	int tt; cin >> tt; for (int i = 1; i <= tt; i++) {solve();}
}