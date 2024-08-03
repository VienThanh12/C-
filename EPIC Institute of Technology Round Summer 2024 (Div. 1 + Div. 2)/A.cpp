#include<iostream>
#include<algorithm>
using namespace std;
typedef long long ll;
#define For(type, i, a, b) for (type i = (a); i <= (b); ++i)
#define endl '\n'

ll res = 0;
ll test;
ll n, k;

int main(){
    cin >> test;
    while(test--){
        cin >> n >> k;
        cout << (n - 1) * k + 1 << endl;
    }
}
