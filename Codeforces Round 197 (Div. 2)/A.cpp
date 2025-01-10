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
string s;
ll a[105];
ll cnt = 0;
void solve() {
	cin >> s;
    For(ll, i, 0, s.length() - 1){
        if(i % 2 == 0){
            cnt ++;
            // cout << s[i] << endl;
            a[cnt] = int(s[i] - 48);
        }
    }
    sort(a + 1, a + 1 + cnt);
    
    cnt = 0;
    For(ll, i, 0, s.length() - 1){
        if(i % 2 == 0){
            cnt ++;
            cout << a[cnt];
        }
        else {
            cout <<'+';
        }
    }

}
 
int main() {
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
    {solve();}
}