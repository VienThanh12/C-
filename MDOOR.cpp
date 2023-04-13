include <bits/stdc++.h>
using namespace std;

const int limit = 3e3 + 1;

int n, m, c;
int door[limit][limit], g[limit], a[limit][limit], f[31][limit][limit];

void solveProblem() {
    int maxValue = -INT_MAX;
    for (int k = 0; k <= c ; k ++)
        for (int i = 1; i <= m; i ++)
            for (int j = 1; j <= n; j ++) {
                f[k][i][j] = max(max(f[k][i - 1][j], f[k][i - 1][j - 1]), f[k][i - 1][j + 1]) + a[i][j];
                if (door[i][j] == 1) f[k][i][j] = max(f[k][i][j], g[k - 1] + a[i][j]);
                maxValue = max(maxValue, f[k][i][j]);
                g[k] = maxValue;
            }
    cout << maxValue;
}

void fastInput() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
}

void readInput() {
  //  freopen("MDOOR.inp", "r", stdin);
   // freopen("MDOOR.out", "w", stdout);
    cin >> m >> n >> c;
    for (int i = 1; i <= m; i ++)
        for (int j = 1; j <= n; j ++)
            cin >> door[i][j];

    for (int i = 1; i <= m; i ++)
        for (int j = 1; j <= n; j ++)
            cin >> a[i][j];

}

int main() {
    fastInput();
    readInput();
    
    solveProblem();
}
    
