#include <iostream>
#include<algorithm>
using namespace std;

typedef long long ll;
#define For(type, i, a, b) for (type i = (a); i <= (b); ++i)
#define endl '\n'
 

void solve() {
	ll a, b, c;
    cin >> a >> b >> c;

    a < b && b < c ? cout << "STAIR" << endl : a < b && b > c ? cout <<"PEAK" <<endl : cout <<"NONE" << endl;
}
 
int main() {
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	int tt; cin >> tt; for (int i = 1; i <= tt; i++) {solve();}
}