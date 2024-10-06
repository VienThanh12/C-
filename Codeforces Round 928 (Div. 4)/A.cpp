#include <iostream>
#include<algorithm>
using namespace std;
typedef long long ll;
#define For(type, i, a, b) for (type i = (a); i <= (b); ++i)
#define endl '\n'
#define YES cout << "YES\n"
#define NO cout << "NO\n"
string s;

void solve() {
    
    cin >> s;
    ll cnt_A = 0, cnt_B = 0;
    For(ll, i, 0, s.length() - 1){
        if(s[i] == 'A'){
            cnt_A++;
        }
        else cnt_B++;
    }
    cnt_A > cnt_B ? cout << 'A' << endl : cout << 'B' << endl; 
}
 
int main() {
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	int tt; cin >> tt; for (int i = 1; i <= tt; i++) {solve();}
}