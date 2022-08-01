#include<bits/stdc++.h>
using namespace std;
#define For(type, i, a, b) for(type i = a; i <= b; i++)
typedef long long ll;

const ll MOD = 1e9 + 7;
const ll limit = 1e6 + 5;

ll a[limit], dp[limit];
string s;
ll k;
ll res = 0;

void FastIn(){
    ios_base::sync_with_stdio(false);
    cout.tie(0);
    cin.tie(0);
}
void ReadIn(){
    cin >> k;
    cin >> s;
 //   cout << 1;
    /*
    if(s.length() <= 1e6){
     //   cout << 1;'
        s = " " + s;
    //    cout << s << endl;
        dp[0] = 0;
        For(ll, i, 1, s.length()){
            dp[i] = dp[i - 1];
            if(s[i] == '1')
                dp[i] ++;
        }
        //For(ll, i, 0, s.length() - 1)
            //cout << dp[i] << " ";
        //cout << endl;
        res = 0;
        For(ll, i, 1, s.length() - 1){
            For(ll, j, i, s.length() - 1){
                if(dp[j] - dp[i - 1]  == k){
                    res++;
                }
            }
        }
        cout << res;
        return;
    }

    */
    if(k == 0){
        ll kd = 0, hkd = 0;
        res = 0;
        s = s + "1";
        For(ll, i, 0, s.length() - 1){
            if(s[i] == '0'){
                //kd++;
                hkd++;
            }
            else {
                kd++;
                dp[kd] = hkd;
                hkd = 0;
            }
        }
   //     For(ll, i, 1, kd)
   //     For(ll, i, 1, kd)
     //       cout << dp[i] <<" ";

        For(ll, i, 1, kd)
            res = res + (dp[i] + 1) * dp[i] / 2;
        cout << res;
        return;
    }

    //ll first, second, mid;
    s = "01" + s;
    s = s + "1";
    ll kd = 0;
    //    cout << s << endl;
    For(ll, i, 0, s.length() - 1){
        if(s[i] == '1'){
            kd++;
            dp[kd] = i;
        }
    }
    res = 0;
//    For(ll, i, 1, kd)
  //      cout << dp[i] <<" ";
   // cout << endl;
    For(ll, i, 2, kd - k){
        if(2 + k - 1 <= kd){
            res = res + (dp[i] - dp[i - 1]) * (dp[i + k] - dp[i + k - 1]);
        //    cout <<  (dp[i] - dp[i - 1]) << " " <<  (dp[i + k] - dp[i + k - 1]) << endl;
        }
    }
    cout << res;
}
int main(){
   // freopen("PracticeForHSG12.INP","r", stdin);
  //  freopen("PracticeForHSG12.OUT","w", stdout);
    FastIn();
    ReadIn();
}
// 01010
// 01122
//  2 4 5
// 3
// 1 00010101110 1
// 10

// kd = 5 + 2 = 7
// 1 5 7 9 10 11 13
// 2 -> 2 + k - 1
// kd - k -> kd - 1
// 5 9  +4
// 7 10 +2
// 9 11 +4
