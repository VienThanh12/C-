#include <iostream>
#include<algorithm>
using namespace std;

typedef long long ll;
#define For(type, i, a, b) for (type i = (a); i <= (b); ++i)
#define endl '\n'
 
ll n;

void solve() {
    cin >> n;
    string t;
    For(ll, i, 1, n){
        if(i % 5 == 1){
            t += 'a';
        }
        else if(i % 5 == 2){
            t += 'e';
        }
        else if(i % 5 == 3){
            t += 'i';
        }
        else if(i % 5 == 4){
            t += 'o';
        }
        else if(i % 5 == 0){
            t += 'u';
        }
    }
    sort(t.begin(), t.end());
    cout << t << endl;
}
 
int main() {
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	int tt; cin >> tt; for (int i = 1; i <= tt; i++) {solve();}
}