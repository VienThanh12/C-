#include<iostream>
#include<algorithm>
using namespace std;
typedef long long ll;
#define For(type, i, a, b) for (type i = (a); i <= (b); ++i)
#define endl '\n'

ll test;
ll n;

int main(){
    cin >> test;
    while(test--){
        cin >> n;
        if(n % 4 == 2){
            cout << n / 4 + 1 << endl;
        }
        else cout << n / 4 << endl;
    }
}
