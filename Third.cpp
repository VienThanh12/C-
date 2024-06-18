#include<iostream>
#include<algorithm>
using namespace std;
typedef long long ll;
#define For(type, i, a, b) for (type i = (a); i <= (b); ++i)

ll res = 0, ans = 0;
ll test;
ll n;
const ll limit = 3 * 1e5 + 5;
ll a[limit];
ll k;

int main(){
    cin >> test;
    while(test--){
        cin >> n >> k; 
        ll first = 1, second = n;
        For(ll, i, 1, n)
            a[i] = i;

        while (first < second && k > 0){
            //cout << first << " " << second << endl;
            if(abs(first - second) * 2 <= k){   
                k -= abs(first - second) * 2;
                swap(a[first], a[second]);
                first ++;
                second --;
                continue;
            }
            second --;
        }
        //cout << k << endl;
        if(k != 0) 
            cout << "No" << endl;
        else {
            cout << "Yes" << endl;
            For(ll, i, 1, n)
                cout << a[i] << " ";
            cout << endl;
        }
    }
}
