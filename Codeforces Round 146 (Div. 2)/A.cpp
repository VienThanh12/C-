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
ll dp[200];

void solve() {
	cin >> s;

    ll cnt = 0;
    For(ll, i, 0, s.length() - 1){
        if(dp[s[i]] == 0){
            dp[s[i]]++;
            cnt++;
        } 
    }
    
    cnt % 2 == 0 ? cout <<"CHAT WITH HER!" : cout <<"IGNORE HIM!";
}
 
int main() {
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
    {solve();}
}