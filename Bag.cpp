#include <bits/stdc++.h>

using namespace std;

#define fi first
#define se second
#define For(type, i, a, b) for (type i = (a); i <= (b); ++i)
#define endl '\n'
#define all(a) a.begin(), a.end()

typedef long long ll;
typedef pair<ll, ll> ii;


const ll maxN = 1e18;
const ll minN = -1e18;
const ll MOD = 1e9 + 7;

const ll limit = 1e3 + 5;
const ll limit1 = 1e4 + 5;
const ll limit2 = 2e5 + 5;
const ll limit3 = 1e6 + 5;

ll test;
ll n, m, l, k, x, y, z, u, v;
ll res, sum, ans, kd, hkd, answer, cnt, type;
bool ok = false;
string s;
ll a[100], b[100], c[100];
vector<ll> f;
void FastIn(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
}

ll Check(){
    sum = 0;
    hkd = 0;
    res = 0;
    For(ll, i, 1, n){
        if(c[i] == 1){
            sum += a[i];
            res += b[i];
        }
    }
    if(sum <= m && cnt < res){
        cnt = res;
        kd = 0;
        f.clear();
        For(ll, i, 1, n){
            if(c[i] == 1){
                kd++;
                f.push_back(i);
            }
        }
    }
}
ll BackTrack(ll i){
    for(ll j = 0; j <= 1; j++){
        c[i] = j;
        if(i == n) Check();
        else BackTrack(i + 1);
    }
}
void ReadIn(){
    cin >> n >> m;
    For(ll, i, 1, n){
        cin >> a[i] >> b[i];
    }
    cnt = 0; res = 0;
    BackTrack(1);
   // cout << res << endl;
    //cout << cnt << endl;
    cout << kd << endl;
    For(ll, i, 0, f.size() - 1){
        cout << f[i] <<" ";
    }
}
int main(){
    FastIn();
    ReadIn();
}
