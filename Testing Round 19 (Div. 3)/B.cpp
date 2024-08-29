#include <iostream>
#include<algorithm>
using namespace std;

typedef long long ll;
#define For(type, i, a, b) for (type i = (a); i <= (b); ++i)
#define endl '\n'
 
ll a, b;

void solve() {
    cin >> a >> b;
	For(ll, i, 1, 3){
        if(i != a && i != b){
            cout << i;
        }
    }
}
 
int main() {
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	int tt; tt = 1; for (int i = 1; i <= tt; i++) {solve();}
}