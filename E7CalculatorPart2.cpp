#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
ll type;
class Calculator {
public:
    ll Cur_Val = 0;
public:
    void add(ll num){
        Cur_Val += num;
    }
    void sub(ll num){
        Cur_Val -= num;
    }
    void mul(ll num){
        Cur_Val *= num;
    }
    void frac(ll num){
        if(num == 0){
            cout << "Can not devide by zero";
        }
        Cur_Val /= num;
    }
    ll GetCurVal(){
        return Cur_Val;
    }
};

int main(){
    Calculator calculator;
    int num;
    while(type != 5){
        cout << "Current value: " << calculator.GetCurVal() << endl;
        cout << "1. Add\n";
        cout << "2. Subtract\n";
        cout << "3. Multiply\n";
        cout << "4. Divide\n";
        cout << "5. Exit\n";
        cout << "Enter choice (1-5): ";
        cin >> type;
        if(type == 1){
            cout << "Enter number to add: ";
            cin >> num;
            calculator.add(num);
        }
        if(type == 2){
            cout << "Enter number to subtract: ";
            cin >> num;
            calculator.sub(num);
        }
        if(type == 3){
            cout << "Enter number to multiply: ";
            cin >> num;
            calculator.mul(num);
        }
        if(type == 4){
            cout << "Enter number to divide: ";
            cin >> num;
            calculator.frac(num);
        }

    }
}
