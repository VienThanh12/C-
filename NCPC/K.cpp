#include <bits/stdc++.h>
using namespace std;
 
const int MAXN = 1e3 + 1;
long long n;
long long f1[MAXN], f2[MAXN];

void solve() {
   cin >> n; 
   
   for (int i = 1; i <= n; i++) {
       int temp1; 
       cin >> temp1;
       
       f1[temp1]++;
   }
   
   for (int i = 1; i < n; i++) {
       int temp2; 
       cin >> temp2;
       
       f2[temp2]++;
   }
   
   for (int i = 1; i <= 1000; i++) {
       if(f1[i] and !f2[i]) {
           cout << i; 
           return;
       }
   }
   
}
 
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
 
    solve();
 
    return 0;
}
