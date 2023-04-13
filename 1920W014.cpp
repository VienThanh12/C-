#include<iostream>
using namespace std;
typedef long long ll;
const ll limit = 1e6;

ll a[limit];
ll dp[limit][30];
ll test;
ll u1, u2, v1, v2;
string s;

void FastIn(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
}

void ReadIn(){
    cin >> s;
    cin >> test;
}

void SolveProblem(){
    // 97 
    for(ll i = 0; i < s.length(); i++){
        dp[i + 1][0] = dp[i][0];
        dp[i + 1][1] = dp[i][1];
        dp[i + 1][2] = dp[i][2];
        dp[i + 1][3] = dp[i][3];
        dp[i + 1][4] = dp[i][4];
        dp[i + 1][5] = dp[i][5];
        dp[i + 1][6] = dp[i][6];
        dp[i + 1][7] = dp[i][7];
        dp[i + 1][8] = dp[i][8];
        dp[i + 1][9] = dp[i][9];
        dp[i + 1][10] = dp[i][10];
        dp[i + 1][11] = dp[i][11];
        dp[i + 1][12] = dp[i][12];
        dp[i + 1][13] = dp[i][13];
        dp[i + 1][14] = dp[i][14];
        dp[i + 1][15] = dp[i][15];
        dp[i + 1][16] = dp[i][16];
        dp[i + 1][17] = dp[i][17]; 
        dp[i + 1][18] = dp[i][18];
        dp[i + 1][19] = dp[i][19];
        dp[i + 1][20] = dp[i][20];
        dp[i + 1][21] = dp[i][21];
        dp[i + 1][22] = dp[i][22];
        dp[i + 1][23] = dp[i][23];
        dp[i + 1][24] = dp[i][24];
        dp[i + 1][25] = dp[i][25];
        dp[i + 1][int(s[i]) - 97]++;
    }
}
ll Check(ll u1, ll u2, ll v1, ll v2){
    for(ll i = 0; i <= 25; i++){
        if(dp[u2][i] - dp[u1 - 1][i]  != dp[v2][i] - dp[v1 - 1][i])    
            return 0;
    }
    return 1;
}
void Out(){

    for(ll i = 1; i <= test; i++){
        cin >> u1 >> u2 >> v1 >> v2;
        cout << Check(u1, u2, v1, v2) << endl;
    }
}
int main(){
    FastIn();
    ReadIn();
    SolveProblem();
    Out();
}
    
