#include <iostream>
#include<algorithm>
using namespace std;

typedef long long ll;
#define For(type, i, a, b) for (type i = (a); i <= (b); ++i)
#define endl '\n'
#define YES cout << "YES\n"
#define NO cout << "NO\n"

ll n;
bool check0_1(ll x){
    while(x != 0){
        if(x % 10 != 0 && x % 10 != 1){
            return false;
        }
        x /= 10;
    }
    return true;
}
void solve() {
	cin >> n;
    while(n % 10 == 0 || n % 11 == 0 || n % 101 == 0 || n % 111 == 0 || n % 110 == 0){
        if(check0_1(n)){
            cout <<"YES" << endl;
            return;
        }
        if(n % 10 == 0) n /= 10;
        else if(n % 11 == 0) n /= 11;
        else if(n % 101 == 0) n /= 101;
        else if(n % 111 == 0) n /= 111;
        else if(n % 110 == 0) n /= 110;
    }
    
    check0_1(n) ? YES : NO;
}
 
int main() {
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	int tt; cin >> tt; for (int i = 1; i <= tt; i++) {solve();}
}