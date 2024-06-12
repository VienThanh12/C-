#include<iostream>
using namespace std;
typedef long long ll;

ll res = 0;
ll test;

int main(){
    cin >> test;
    while(test--){
        string a, b;
        cin >> a >> b;
        char temp = b[0];
        b[0] = a[0];
        a[0] = temp;
        cout << a << " " << b << endl;
    }
}
