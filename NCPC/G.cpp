#include <bits/stdc++.h>
using namespace std;

struct c {
    long long X, Y, R;
};

const int MAXN = 1e1 + 1;
const long long VALUE = 1e18;
const int RANDOMSAMPLE = 3e6;
int n; 
long long XMAX = -VALUE, XMIN = VALUE, YMAX = -VALUE, YMIN = VALUE;
vector<c> cir(MAXN);
long long outside = 0; 

void solve() {
  cin >> n; 
  
 for (int i = 1; i <= n; i++) {
    cin >> cir[i].X >> cir[i].Y >> cir[i].R;
    XMAX = max(XMAX, cir[i].X + cir[i].R);
    XMIN = min(XMIN, cir[i].X - cir[i].R);
    YMAX = max(YMAX, cir[i].Y + cir[i].R);
    YMIN = min(YMIN, cir[i].Y - cir[i].R);
}

    
    srand(time(0));
    for(int i = 1; i <= RANDOMSAMPLE; i++) {
        long double px = XMIN + (XMAX - XMIN) * ((long double) rand() / RAND_MAX);
        long double py = YMIN + (YMAX - YMIN) * ((long double) rand() / RAND_MAX);
        
        //cout << px << ' ' << py << endl;
        bool isInside = false;
        for (auto &c : cir) {
            long double dx = px - c.X, dy = py - c.Y;
            if (sqrt(pow(dx, 2) + pow(dy, 2)) <= c.R) {
                isInside = true;
                break;
            }
        }
        if (!isInside) outside++;
    }
    
    cout << setprecision(9) << (((XMAX - XMIN) * (YMAX - YMIN)) * (1.0L  - ((long double)outside / RANDOMSAMPLE)));

}
 
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
 
    solve();
 
    return 0;
}
