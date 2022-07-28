#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
const ll limit = 1e9 + 5;

ll test, input_n;

int main(){
    cin >> test;
    while(test--){
        cin >> input_n;
        if(input_n % 2 == 0){
            input_n /= 2;
            ll num_start = 3, num_end = 3 + (input_n - 1) * 4;
        //  cout << num_start <<" " << num_end << endl;
            ll sum = ((num_end + num_start) * input_n) / 2;
            cout << sum << endl;
        }
        else{
            input_n /= 2;
            ll num_start = 3, num_end = 3 + (input_n - 1) * 4;
        //  cout << num_start <<" " << num_end << endl;
            ll sum = ((num_end + num_start) * input_n) / 2;
            input_n = input_n * 2 + 1;

            sum -= (input_n * input_n);
            cout << sum << endl;
        }
    }
}
