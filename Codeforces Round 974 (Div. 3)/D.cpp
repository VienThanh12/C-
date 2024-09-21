#include <iostream>
#include<algorithm>
using namespace std;

typedef long long ll;
#define For(type, i, a, b) for (type i = (a); i <= (b); ++i)
#define endl '\n'
 
ll n, d, k;
const ll limit = 2e5 + 10;

ll l[limit], r[limit];
ll new_emp[limit];
ll un_emp[limit];
ll cur_emp[limit];
ll prefix_new_emp[limit];


void solve() {
    cin >> n >> d >> k;
    For(ll, i, 1, k){
        cin >> l[i] >> r[i];
        new_emp[l[i]] ++;
        un_emp[r[i]] --;
    }
    new_emp[0] = 0;
    un_emp[0] = 0;
    cur_emp[0] = 0;
    prefix_new_emp[0] = 0;

    For(ll, i, 1, n){
        prefix_new_emp[i] = prefix_new_emp[i - 1] + new_emp[i];
    }
    // For(ll, i, 1, n)
    //     cout << new_emp[i] <<" ";
    // cout << endl;

    //  For(ll, i, 1, n)
    //     cout << un_emp[i] <<" ";
    // cout << endl;
    // For(ll, i, 1, n)
    //     cout << prefix_new_emp[i] <<" ";
    ll bro = 1, mom = 1;
	For(ll, i, 1, n){
        cur_emp[i] = cur_emp[i - 1] + new_emp[i];
        cur_emp[i] += un_emp[i - 1];
    }
    // cout << endl;
    // For(ll, i, 1, n)
    //     cout << cur_emp[i] <<" ";

    // cout << endl;

    ll max_dis = 0, min_dis = 1e18;
    For(ll, i, 1, n - d + 1){
        
        ll dis_job = cur_emp[i] + prefix_new_emp[i + d - 1] - prefix_new_emp[i]; 
        // cout << dis_job <<" ";
        if(dis_job > max_dis){
            max_dis = dis_job;
            bro = i;
        }
        if(dis_job < min_dis){
            min_dis = dis_job;
            mom = i;
        }
    }
    // cout << endl;
    cout << bro <<" " << mom << endl;
    For(ll, i, 0, n + 1){
        new_emp[i] = 0;
        un_emp[i] = 0;
        cur_emp[i] = 0;
        prefix_new_emp[i] = 0;
    }
}
 
int main() {
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	int tt; cin >> tt; for (int i = 1; i <= tt; i++) {solve();}
}