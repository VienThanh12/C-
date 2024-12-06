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

const ll limit = 2e5 + 10;
ll a[limit];

void solve() {
	cin >> n;
    
    For(ll, i, 1, n)
        cin >> a[i];
    ll sum_1 = 0, cnt_1 = 0;
    ll sum_2 = 0, cnt_2 = 0; 
    for(ll i = 1; i <= n; i += 2){
        sum_1 += a[i];
        cnt_1 ++;
    }
    for(ll i = 2; i <= n; i += 2){
        sum_2 += a[i];
        cnt_2 ++;
    }
    if(sum_1 % cnt_1 == 0 && sum_2 % cnt_2 == 0 && sum_1 / cnt_1 == sum_2 / cnt_2){
        cout << "Yes" << endl;
    }
    else cout <<"No" << endl;
}
 
int main() {
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	int tt; cin >> tt; for (int i = 1; i <= tt; i++) {solve();}
}