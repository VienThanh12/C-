#include <iostream>
#include <vector>
using namespace std;
 
typedef long long ll;
 
ll solve(ll b, ll c, ll d) {
    ll a = 0;
    for (int i = 0; i <= 61; ++i) {
        ll b_i = (b >> i) & 1;
        ll c_i = (c >> i) & 1;
        ll d_i = (d >> i) & 1;
        ll a_i = -1;
 
        if (b_i == 0 && c_i == 0) {
            if (d_i == 0) {
                a_i = 0;
            } else if (d_i == 1) {
                a_i = 1;
            }
        } else if (b_i == 0 && c_i == 1) {
            if (d_i == 0) {
                a_i = 0; // Can be 0 or 1, we choose 0
            } else {
                return -1; // No solution
            }
        } else if (b_i == 1 && c_i == 0) {
            if (d_i == 0) {
                return -1; // No solution
            } else {
                a_i = 0; // Can be 0 or 1, we choose 0
            }
        } else if (b_i == 1 && c_i == 1) {
            if (d_i == 0) {
                a_i = 1;
            } else if (d_i == 1) {
                a_i = 0;
            }
        }
 
        if (a_i == -1) {
            return -1; // No valid a_i found
        }
 
        a |= (a_i << i);
    }
    return a;
}
 
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
 
    int t;
    cin >> t;
    while (t--) {
        ll b, c, d;
        cin >> b >> c >> d;
        ll a = solve(b, c, d);
        cout << a << '\n';
    }
 
    return 0;
}