#include <iostream>
#include<algorithm>
using namespace std;

typedef long long ll;
#define For(type, i, a, b) for (type i = (a); i <= (b); ++i)
#define endl '\n'
const ll limit = 100;

ll n;
ll a[limit][limit];

void solve() {
	cin >> n;
    For(ll, i, 1, 2 * n){
        For(ll, j, 1, 2 * n){
            a[i][j] % 2 ? cout <<"#" : cout << "." ;
        }
        cout << endl;
    }

}
 
int main() {
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
    For(ll, i, 1, 80){
        For(ll, j, 1, 80)
            a[i][j] = 0;
    }
     for(ll i = 1; i <= 80; i += 4){
        for(ll j = 1; j <= 80; j+= 4){
            a[i][j] = 1;
            a[i + 1][j] = 1;
            a[i][j + 1] = 1;
            a[i + 1][j + 1] = 1;
        }
    }
     for(ll i = 3; i <= 80; i += 4){
        for(ll j = 3; j <= 80; j += 4){
            a[i][j] = 1;
            a[i + 1][j] = 1;
            a[i][j + 1] = 1;
            a[i + 1][j + 1] = 1;
        }
    }
	int tt; cin >> tt; for (int i = 1; i <= tt; i++) {solve();}
}