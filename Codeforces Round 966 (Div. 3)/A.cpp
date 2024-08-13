#include <iostream>
#include<algorithm>
using namespace std;

typedef long long ll;
#define For(type, i, a, b) for (type i = (a); i <= (b); ++i)
#define endl '\n'
 
string s;
void solve() {
	cin >> s;

	ll res = int(s[0] - 48) * 10 + int(s[1] - 48); 
	if(res != 10){
		cout <<"NO" << endl;
		return;
	}

	if(s[2] == '0'){
		cout <<"NO" << endl;
		return;
	}
	if(s[2] == '1' && s.length() == 3){
		cout <<"NO" << endl;
		return;
	}
	if(s.length() <= 2){
		cout <<"NO" << endl;
		return;
	}
	cout <<"YES" << endl;
	return;
}
 
int main() {
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	int tt; cin >> tt; for (int i = 1; i <= tt; i++) {solve();}
}