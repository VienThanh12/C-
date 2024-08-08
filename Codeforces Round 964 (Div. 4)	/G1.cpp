#include <iostream>
#include<algorithm>
using namespace std;

typedef long long ll;
#define For(type, i, a, b) for (type i = (a); i <= (b); ++i)
#define endl '\n'
 

ll res;
ll test;
ll n, k;

void solve() {
	ll l = 1, r = 1000, x;
    res = 999;
	while (l <= r) {
		ll mid = (l + r) / 2;
		cout << "? 1 " << mid << endl;
		
        cin >> x;
		
		if (x > mid) {
            res = min(res, mid);
			r = mid - 1;
		} 
		else {
			l = mid + 1;
		}
	}
	cout << "! " << l << endl;	
}
 
int main() {
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	int tt; cin >> tt; for (int i = 1; i <= tt; i++) {solve();}
}