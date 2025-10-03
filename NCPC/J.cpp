#include <bits/stdc++.h>
using namespace std;
 
const int MAXN = 1e3 + 1;
long long startx1, starty1, startx2, starty2, tarx1, tary1, tarx2, tary2;

void solve() {
   cin >> startx1 >> starty1 >> startx2 >> starty2 >> tarx1 >> tary1 >> tarx2 >> tary2;
   
   float s1 = sqrt(pow(abs(startx1 - startx2), 2) + pow(abs(starty1 - starty2), 2));
   float s2 = sqrt(pow(abs(tarx1 - tarx2), 2) + pow(abs(tary1 - tary2), 2));
   
   cout << setprecision(9) << max(s1, s2);
   
}
 
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
 
    solve();
 
    return 0;
}
