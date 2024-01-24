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
stack<ll> s,t;
ll h[limit3];
ll a[limit][limit], dp[limit][limit];
ll create_left[limit], create_right[limit];

void FastIn(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
}

void reset(){
    while(!s.empty()) s.pop();
    while(!t.empty()) t.pop();

    for(ll i = 1; i <= n; i++){
        create_left[i] = 0;
        create_right[i] = 0;
    }
}

void built_left(){

    s.push(0);
    h[0] = 0;

    for(ll i = 1; i <= n ; i++){
        while(1){
            if(h[i] == 0){
                break;
            }
            if(h[s.top()] < h[i]){
                create_left[i] = s.top();
                s.push(i);
                break;
            }
            else s.pop();
        }
    }
}

void built_right(){

    t.push(n+1);

    for(ll i = n; i >= 1  ; i--){
        while(1){
            if (h[i] == 0){
                break;
            }
            if(h[t.top()] < h[i]){
                create_right[i] = t.top();
                t.push(i);
                break;
            }
            else t.pop();
        }
    }
}

void ReadIn(){
    cin >> m >> n;
    /*
    For(ll, i, 1, n)    cin >> h[i];
    built_left();
    built_right();
    for(ll i = 1; i <= n; i++){
        ans = max(ans, (create_right[i] - create_left[i] - 1) * h[i]);
        //  cout << ans <<" "<< create_right[i] <<" " << create_left[i] <<endl;
    }
    */
    //cout << ans;
    For(ll, i, 1, n) h[i] = 1;
    while(m --> 0){
        kd = 0;
        For(ll, j, 1, n){
            cin >> x;
            if (x == 0) h[j] = 1;
            else h[j] += 1;
        }


        reset();
        built_left();
        built_right();
        //cout << endl;
        for(ll i = 1; i <= n; i++){
            ans = max(ans, (create_right[i] - create_left[i] - 1) * (h[i] - 1));
         //   cout << h[i] <<" "<< create_right[i] <<" " << create_left[i] <<endl;
        }

    }
    cout << ans;

}
int main(){
    FastIn();
    ReadIn();
}
