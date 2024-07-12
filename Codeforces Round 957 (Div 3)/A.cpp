#include<iostream>
#include<algorithm>
using namespace std;
typedef long long ll;
#define For(type, i, a, b) for (type i = (a); i <= (b); ++i)
#define endl '\n'

ll res = 0;
ll test;
ll n;
ll a[5];

int main(){
    cin >> test;
    while(test--){
        cin >> a[1] >> a[2]  >> a[3];
        sort(a + 1, a + 1 + 3);
        a[1] += 1;
        sort(a + 1, a + 1 + 3);
        a[1] += 1;
        sort(a + 1, a + 1 + 3);
        a[1] += 1;
        sort(a + 1, a + 1 + 3);
        a[1] += 1;
        sort(a + 1, a + 1 + 3);
        a[1] += 1;
        cout << a[1] * a[2] * a[3] << endl;
    }
}
