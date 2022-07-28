#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
const ll limit = 1e6 + 5;

ll test, n, k;
ll a, b, c;

int main(){
    cin >> test;
    while(test--){
        cin >> a >> b >> c;
        if(a < b) swap(a, b);
        if(a < c) swap(a, c);
        if(b < c) swap(b, c);
        cout << max(max(a % b, a % c), b % c) << endl;
    }
}



