#include <iostream>
#include<algorithm>
using namespace std;
typedef long long ll;
#define For(type, i, a, b) for (type i = (a); i <= (b); ++i)
#define endl '\n'
#define YES cout << "YES\n"
#define NO cout << "NO\n"

ll ans = 0, res = 0, temp = 0;
ll n, m;

const ll limit = 5e3 + 10;

ll a[limit][limit];

void solve() {
    cin >> n >> m;
    char s;

    For(ll, i, 1, n)
        For(ll, j, 1, m){
            cin >> s;
            s == 'W' ? a[i][j] = 0 : a[i][j] = 1;
        }
  
    // Case 1:
    // 000
    // 111
    ll cnt_up = 0;
    ll cnt_down = 0;

    For(ll, i, 1, m){
        cnt_up += a[1][i];
    }
    For(ll, i, 1, m){
        cnt_down += a[n][i];
    }
    // Case 1:
    // 000
    // 111

    // Case 2:
    // 111
    // 000
    if(cnt_up == 0 && cnt_down == m || cnt_up == m && cnt_down == 0){
        NO;
        return;
    }

    // Case 3:
    // 000
    // 111

    // Case 4:
    // 111
    // 000

    ll cnt_left = 0, cnt_right = 0;
    For(ll, i, 1, n){
        cnt_left += a[i][1];
        cnt_right += a[i][m];
    }
    if(cnt_left == 0 && cnt_right == n || cnt_left == n && cnt_right == 0 ){
        NO;
        return;
    }
    YES;
    return;
}    
 
int main() {
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	int tt; cin >> tt; for (int i = 1; i <= tt; i++) {solve();}
}