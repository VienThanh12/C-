#include <iostream>
#include<algorithm>
using namespace std;

typedef long long ll;
#define For(type, i, a, b) for (type i = (a); i <= (b); ++i)
#define endl '\n'
 
ll n, m;

void solve() {
	cin >> n >> m;
    
    if(n < m){
        cout <<"No" << endl;
        return;
    }
    if((n - m ) % 2 != 0){
        cout <<"No" << endl;
        return;
    }
    cout <<"Yes" << endl;
}   
 
int main() {
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	int tt; cin >> tt; for (int i = 1; i <= tt; i++) {solve();}
}