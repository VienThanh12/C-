#include<iostream>
using namespace std;
typedef long long ll;

bool def = false;
void Cal(int& value_1, int& value_2, char& type, int& result){
    if(type == '+'){
        result = value_1 + value_2;
    }
    else if(type == '-'){
        result = value_1 - value_2;
    }
    else if(type == '*'){
        result = value_1 * value_2;
    }
    else if(type == '/'){
        result = value_1 / value_2;
    }
    else {
        def = true;
        cout << "Undefined";
        return;
    }
}

int main(){
    int value_1, value_2, result;
    char type;
    cout << "Enter first value: ";
    cin >> value_1;

    cout << "Enter operator (+,-,*,/): ";
    cin >> type;

    cout << "Enter second value: ";
    cin >> value_2;

    Cal(value_1, value_2, type, result);
    if(def == true) return 0;
    cout << "Result: " << result << endl;

    return 0;
}
