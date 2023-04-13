#include<iostream>
#include<algorithm>
using namespace std;
typedef long long ll;
const ll limit = 1e5;

ll n, m, p, taxi, bus;
ll a[limit], b[limit];
ll cnt1[limit], cnt2[limit], cnt[limit];
ll first, second, mid;
ll ans = 0, sum = 0, res = 0;

void FastIn(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
}

void Made(){
    ll j = 0;
    b[0] = 1;
    for(ll i = 1; i <= m; i++){
        while(b[j] <= a[i] && j <= p) j++;
        j--;
        cnt1[i] = a[i] - b[j];
    }
    b[p + 1] = 1e18;
    j = p + 1;;
    for(ll i = m; i >= 1; i--){
        while(b[j] >= a[i] && j >= 1) j--;
        j++;
        cnt2[i] = b[j] - a[i];
    }
    // cnt[n] = n - b[p];

    for(ll i = 1; i <= m; i++)
        cnt[i] = min(cnt1[i], cnt2[i]);

    /*
    for(ll i = 1; i <= m; i++)
        cout << cnt[i] <<" ";
    cout << endl;
    */
}
void SolveProblem(){
    a[0] = 1;
    for(ll i = 0; i < m; i++){
        ans = (a[i + 1] - a[i]) * taxi; 
        sum = cnt[i] * taxi + cnt[i + 1] * taxi + bus; 
        res += min(ans, sum);
        //cout << ans <<" " << cnt[i + 1] << endl;
      //  cout << min(ans, sum) << endl;
    }   
    res += min((n - a[m]) * taxi , cnt[m] * taxi + bus);
    cout << res;
}


void ReadIn(){
    cin >> n >> m >> p >> taxi >> bus;
    for(ll i = 1; i <= m; i++) 
        cin >> a[i];
    for(ll i = 1; i <= p; i++) 
        cin >> b[i];
    
    sort(a + 1, a + 1 + m);
    sort(b + 1, b + 1 + p);

    Made();
    SolveProblem();
}

int main(){
    FastIn();
    ReadIn();
}
// 2 trường hợp 1 đi taxi đến lun
// th 2 đi 2 taxi và đi 1 chuyến xe bus
