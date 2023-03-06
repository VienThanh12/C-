#include<iostream>
using namespace std;
typedef long long ll;


string ConvertBase10ToBase2(ll x){
    ll res = 0;
    string s;
    while(x != 0){
        if(x % 2 == 1){
            s = '1' + s;
        }
        else{
            s = '0' + s;
        }
        x /= 2;
    }
    return s;
}
int main(){
    ll n;
    cin >> n;
    cout << ConvertBase10ToBase2(n);
}
