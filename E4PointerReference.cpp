#include<iostream>
using namespace std;
typedef long long ll;


void ReferenceFunction(int& x, int& y){
    x *= y;
}
void PointerFunction(int* x, int* y){
    *x *= *y;
}
struct Values{
        int x;
        int y;
};
void StructFunction(Values& values){
    values.x *= values.y;
}
int main(){
    int a, b;
    cout << "Enter two interger: ";
    cin >> a >> b;
    ReferenceFunction(a, b);
    cout << "a multiply with b by ReferencesFunction: " << a << endl;

    cout << "Enter two interger: ";
    cin >> a >> b;

    PointerFunction(&a, &b);
    cout << "a multiply with b by PointerFunction: " << a << endl;

    cout << "Enter two interger: ";
    cin >> a >> b;
    Values values{a, b};
    StructFunction(values);
    cout << "a multiply with b by StructFunction: " << values.x << endl;
}











