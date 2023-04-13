#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
const ll limit = 2e5 + 10;
const ll maxN = 1e18;
const ll minN = -1e18;

ll n, l, r, result;
ll a[limit];
ll b[10][limit], f[2][limit];
ll ans[10][limit], res[10][limit];

void solveSub1() {
	if (result == 1) {
		cout << 0;
		return;
	}
	cout << min(l, r);
}

void solveEven(ll n) {
	ll temp = min(l, r);
	ll i = 1;
	f[1][1] = b[1][2] - b[1][1];
	f[2][1] = b[2][2] - b[2][1];
	while (i < n - 1) {
		i += 2;
		f[1][i] = f[1][i-2] + b[1][i+1] - b[1][i];
		f[2][i] = f[2][i-2] + b[2][i+1] - b[2][i];
	}
	long res = 1ll * min(f[1][i], f[2][i]) * temp;
	cout << res;
}

void solveOdd(ll n) {
	ll i = 1;
	ll temp = min(l, r);
	ans[1][1] = b[1][2] - b[1][1];
	ans[2][1] = b[2][2] - b[2][1];
	while (i < n - 2)
	{
		i += 2;
		ans[1][i] = ans[1][i - 2] + abs(b[1][i + 1] - b[1][i]);
		ans[2][i] = ans[2][i - 2] + abs(b[2][i + 1] - b[2][i]);
	}
	ll tempresult1 = ans[1][n - 2];
	ll tempresult2 = ans[2][n - 2];
	res[1][n] = abs(b[1][n - 1] - b[1][n]);
	res[2][n] = abs(b[2][n - 1] - b[2][n]);
	i = n;
	while (i > 3) {
		i -= 2;
		res[1][i] = res[1][i+2] + abs(b[1][i-1] - b[1][i]);
		res[2][i] = res[2][i+2] + abs(b[2][i-1] - b[2][i]);
		tempresult1 = min(tempresult1, res[1][i + 2] + ans[1][i - 2]);
		tempresult2 = min(tempresult2, res[2][i + 2] + ans[2][i - 2]);
	}
	tempresult1 = min(tempresult1, res[1][3]);
	tempresult2 = min(tempresult2, res[2][3]);
	tempresult2 = 1ll * min(tempresult2, tempresult1) * temp;
	cout << tempresult2;
}

bool check(ll i) {
	if (i % 2 == 1) return true;
	return false;
}

void solveProblem() {
    b[2][1] = b[2][2] - (n - (b[2][result + 1] - b[2][2]));
    if (n == 3)
		solveSub1();
    else if (result % 2 == 0)
        solveEven(result);
    else if (result % 2 != 0)
        solveOdd(result);
}

void fastInput() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);cout.tie(0);
}

void readInput() {
  //  freopen("SWGAME.inp","r",stdin);
   // freopen("SWGAME.out","w",stdout);
	cin >> n >> l >> r;
	for (int i=1; i <= n; i++) {
		cin >> a[i];
		if (check(a[i]) == true) {
			result++;
			b[1][result] = i;
			b[2][result + 1] = i;
		}
	}

}

int main() {
    fastInput();
	readInput();
	solveProblem();
}
    
