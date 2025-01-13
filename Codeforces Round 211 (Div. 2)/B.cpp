#include <iostream>
#include<algorithm>
using namespace std;
typedef long long ll;
#define For(type, i, a, b) for (type i = (a); i <= (b); ++i)
#define endl '\n'
#define YES cout << "YES\n"
#define NO cout << "NO\n"

ll ans = 0, temp = 0;
ll n, k;
const ll limit = 1e6 + 10;

ll a[limit];
ll sum = 0; 
ll res = 0, cnt = 0;
void solve() {
	cin >> n >> k;
    For(ll, i, 1, n)
        cin >> a[i];
    
    For(ll, i, 1, k)
        sum += a[i];
    
    cnt = 1;
    res = sum;
    For(ll, i, 2, n - k + 1){
        sum -= a[i - 1];
        sum += a[i + k - 1];
        if(sum <= res){
            res = sum;            
            cnt = i;
        }
    }
    cout << cnt;
}
 
int main() {
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	{solve();}
}