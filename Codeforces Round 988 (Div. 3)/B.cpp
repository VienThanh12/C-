#include <iostream>
#include<algorithm>
#include<map>
using namespace std;
typedef long long ll;
#define For(type, i, a, b) for (type i = (a); i <= (b); ++i)
#define endl '\n'
#define YES cout << "YES\n"
#define NO cout << "NO\n"

ll ans = 0, res = 0, temp = 0;
ll k;

const ll limit = 2e5 + 10;

ll a[limit];
map<ll, ll> cnt;

void solve() {
	cin >> k;
    For(ll, i, 1, k){
        cin >> a[i];
        cnt[a[i]]++;
    }

    For(ll, i, 1, k){
        cnt[a[i]] --;

        if((k - 2) % a[i] == 0){
            if(cnt[(k - 2) / a[i]]){

                cout << a[i] << " " << (k - 2) / a[i] << endl;
                 For(ll, i, 1, k){
                    cnt[a[i]] = 0;
                }
                return;
            }
        }
        cnt[a[i]] ++;
    }
}
 
int main() {
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	int tt; cin >> tt; for (int i = 1; i <= tt; i++) {solve();}
}