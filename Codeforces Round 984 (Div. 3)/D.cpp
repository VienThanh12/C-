#include <iostream>
#include<algorithm>
using namespace std;
typedef long long ll;
#define For(type, i, a, b) for (type i = (a); i <= (b); ++i)
#define endl '\n'
#define YES cout << "YES\n"
#define NO cout << "NO\n"

ll ans = 0, res = 0, temp = 0;
ll n, m;
const ll limit = 1e3 + 10;

char a[limit][limit];


void solve() {
	cin >> n >> m;
    string s;
    For(ll, i, 1, n){
        cin >> s;
        For(ll, j, 0, s.length() - 1){
            a[i][j + 1] = s[j];
        }
    }
    // For(ll, i, 1, n){
    //     For(ll, j, 1, m){
    //         cout << a[i][j] <<" ";
    //     }   
    //     cout << endl;
    // }
    res = 0;
    for(ll i = 1; i * 2 <= min(n, m); i++){
        string temp = "";
        for (int j = i; j < m - i + 1; j++) temp = temp + a[i][j];
        for (int j = i; j < n - i + 1; j++) temp = temp + a[j][m - i + 1];
        for (int j = m - i + 1; j > i; j--) temp = temp + a[n - i + 1][j];
        for (int j = n - i + 1; j > i; j--) temp = temp + a[j][i];
        temp = temp + temp[0] + temp[1] + temp[2];
        //  cout << temp << endl;
        for (int j = 0; j < temp.length() - 3; j++) {
            if (temp[j] == '1' &&  temp[j + 1] == '5' && temp[j + 2] == '4' && temp[j + 3] == '3') res++;
        }
        // cout << temp << endl;
    }
    cout << res << endl;
}
 
int main() {
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	int tt; cin >> tt; for (int i = 1; i <= tt; i++) {solve();}
}