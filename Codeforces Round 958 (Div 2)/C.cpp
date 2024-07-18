#include<iostream>
#include<algorithm>
using namespace std;
typedef long long ll;
#define For(type, i, a, b) for (type i = (a); i <= (b); ++i)
#define endl '\n'

ll res = 0;
ll test;
ll n;

string decimal_to_binary(ll n){
    string s;
    while(n != 0){
        if(n % 2 == 1)
            s = '1' + s;
        else 
            s = '0' + s;
        n /= 2;
    }
    return s;
}

ll binary_to_decimal(string s){
    res = 0;
    For(ll, i, 0, s.length() - 1){
        res = res * 2 + int(s[i] - 48);
    }
    return res;
}


int main(){
    cin >> test;
    while(test--){
        cin >> n;
        ll cnt = 0;
        string s = decimal_to_binary(n);
        string temp;
        For(ll, i, 0, s.length() - 1){
            temp = s;
            if(temp[i] == '1' ) {
                temp[i] = '0';
                if(binary_to_decimal(temp) != 0)
                    cnt ++;
            }
        }
        cnt ++;
        cout << cnt << endl;
        For(ll, i, 0, s.length() - 1){
            temp = s;
            if(temp[i] == '1') {
                temp[i] = '0';
                ll kd = binary_to_decimal(temp);
                if(kd != 0)
                    cout << kd << " ";
            }
        }
        cout << n;
        cout << endl;
    }
}
