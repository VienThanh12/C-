#include <iostream>
#include<algorithm>
using namespace std;
typedef long long ll;
#define For(type, i, a, b) for (type i = (a); i <= (b); ++i)
#define endl '\n'
#define YES cout << "YES\n"
#define NO cout << "NO\n"

ll ans = 0, res = 0, temp = 0;
ll n;
const ll limit = 1e3 + 10;
ll a[limit];

void solve() {
	cin >> n;
    ll sum = 0, cnt_2 = 0, cnt_1 = 0;
    For(ll, i, 1, n){
        cin >> a[i];
        sum += a[i];
        if(a[i] == 2){
            cnt_2++;
        }
        else cnt_1 ++;
    }
    if(sum % 2 != 0){
        cout << "NO" << endl;
        return;
    }
    sum /= 2;
    while(sum >= 2 && cnt_2 > 0){
        sum -= 2;
        cnt_2 --;
    }

    if(sum > cnt_1){
        cout <<"NO" << endl;
        return;
    }
    cout <<"YES" << endl;
}
 
int main() {
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	int tt; cin >> tt; for (int i = 1; i <= tt; i++) {solve();}
}