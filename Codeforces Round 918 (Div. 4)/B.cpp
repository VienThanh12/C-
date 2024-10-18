#include <iostream>
#include<algorithm>
using namespace std;
typedef long long ll;
#define For(type, i, a, b) for (type i = (a); i <= (b); ++i)
#define endl '\n'
#define YES cout << "YES\n"
#define NO cout << "NO\n"

ll ans = 0, res = 0, temp = 0;
ll n;

string a, b, c;
void solve() {
    ll cnt_A = 0, cnt_B = 0, cnt_C = 0;

    cin >> a;
    cin >> b;
    cin >> c;

    For(ll, i, 0, a.length() - 1){
        if(a[i] == 'A') cnt_A ++;
        if(a[i] == 'B') cnt_B ++;
        if(a[i] == 'C') cnt_C ++;
    }

    For(ll, i, 0, b.length() - 1){
        if(b[i] == 'A') cnt_A ++;
        if(b[i] == 'B') cnt_B ++;
        if(b[i] == 'C') cnt_C ++;
    }
    For(ll, i, 0, c.length() - 1){
        if(c[i] == 'A') cnt_A ++;
        if(c[i] == 'B') cnt_B ++;
        if(c[i] == 'C') cnt_C ++;
    }
    if(cnt_A < cnt_B && cnt_A < cnt_C) cout << 'A' << endl;
    if(cnt_B < cnt_A && cnt_B < cnt_C) cout << 'B' << endl;
    if(cnt_C < cnt_A && cnt_C < cnt_B) cout << 'C' << endl;
}
 
int main() {
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	int tt; cin >> tt; for (int i = 1; i <= tt; i++) {solve();}
}