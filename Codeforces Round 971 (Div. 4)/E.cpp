#include <iostream>
#include<algorithm>
using namespace std;

typedef long long ll;
#define For(type, i, a, b) for (type i = (a); i <= (b); ++i)
#define endl '\n'

ll n, k;


ll cal(ll i, ll j){
    ll ssh = j - i + 1;
    return ssh * (i + j) / 2;
}
void solve() {
    cin >> n >> k;
    ll start = k, end = k + n - 1, mid;
    ll diff = 1e18;
    ll res = 1e18;
    ll first = start, second = end;

    while(first <= second){
        mid = (first + second) / 2;
        ll temp = abs(cal(start, mid) - cal(mid + 1, end));
        res = min(res, temp);
        cout << mid << endl;
        if(temp <= diff){
            diff = temp;
            For(ll, i, -1000, 1000){
                ll kd = mid + i;
                if(start <= kd && kd <= end){
                    res = min(res, abs(cal(start, kd) - cal(kd + 1, end)));
                }
            }
            first = mid + 1;
        }
        else {
            For(ll, i, -1000, 1000){
                ll kd = mid + i;
                if(start <= kd && kd <= end){
                    res = min(res, abs(cal(start, kd) - cal(kd + 1, end)));
                }
            }
            second = mid - 1;
        }
    }
    cout << res << endl;
}

int main() {
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	int tt; cin >> tt; for (int i = 1; i <= tt; i++) {solve();}
}