#include<iostream>
using namespace std;
typedef long long ll;

string ConverBase10toBase16(ll x){
    ll res = 0, temp = 1;
    while(temp <= x){
        temp *= 16;
    }
    temp /= 16;
    ll num = 0;
    string s;
    while(x != 0){
        num = x / temp;
        //cout << num << endl;
        if(num == 0){
            s = s + "0";
        }
        if(num == 1){
            s = s + "1";
        }
        if(num == 2){
            s = s + "2";
        }
        if(num == 3){
            s = s + "3";
        }
        if(num == 4){
            s = s + "4";
        }
        if(num == 5){
            s = s + "5";
        }
        if(num == 6){
            s = s + "6";
        }
        if(num == 7){
            s = s + "7";
        }
        if(num == 8){
            s = s + "8";
        }
        if(num == 9){
            s = s + "9";
        }
        else
        if(num == 10){
            s = s + "A";
        }
        else
        if(num == 11){
            s = s + "B";
        }
        else
        if(num == 12){
            s = s + "C";
        }
        else
        if(num == 13){
            s = s + "D";
        }
        else
        if(num == 14){
            s = s + "E";
        }
        else
        if(num == 15){
            s = s + "F";
        }
        x = x - temp * num;
        temp = temp / 16;
    }
    return s;
}

int main(){
    ll n;
    cin >> n;
    cout << ConverBase10toBase16(n);

}
