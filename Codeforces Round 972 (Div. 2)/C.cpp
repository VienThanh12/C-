#include <iostream>
#include<algorithm>
using namespace std;

typedef long long ll;
#define For(type, i, a, b) for (type i = (a); i <= (b); ++i)
#define endl '\n'
 
ll n, m, q;

const ll limit = 2e5 + 100;
ll b[limit];
ll x;

void solve() {
	cin >> n >> m >> q;
    For(ll, i, 1, m)
        cin >> b[i];
    sort(b + 1, b + 1 + m);
   
    b[m + 1] = 1e18;
    For(ll, i, 1, q){
        cin >> x;
        
        ll first = 1, second = m + 1, mid = 0;
        ll pos = 1e18;
        while(first <= second){
            mid = (first + second) / 2;
            if(x <= b[mid]){
                pos = min(pos, mid);
                second = mid - 1;   
            }
            else first = mid + 1;
        }
        // cout <<"pos" << pos << endl; 
        if(pos == 1){
            cout << (b[pos] - 1) << endl;
        }
        else if(pos == m + 1){
            cout << (n - b[pos - 1]) << endl;
        }
        else {
            cout << (b[pos] - b[pos - 1]) / 2 << endl;
        }
    }
    For(ll, i, 1, m + 1)
        b[i] = 0;
}
 
int main() {
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	int tt; cin >> tt; for (int i = 1; i <= tt; i++) {solve();}
}