#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
const ll limit = 1e6 + 5;

ll test, n, k;
ll a, b, p;

int main(){
    cin >> test;
    while(test--){
        cin >> a >> b >> p;
        if(a + b == p)
            cout << "Equality Addition" << endl;
        else if(a + b < p)
            cout << "Bigger" << endl;
        else if(a + b > p)
            cout << "Smaller" << endl;
    }
}


