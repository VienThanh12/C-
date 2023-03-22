#include<iostream>
using namespace std;
typedef long long ll;

string s;
ll Ask_Cal_Word_Len(){
    cout << "Enter 5 words" << endl;
    ll sum_len = 0;
    for(ll i = 1; i <= 5; i++){
        cout << "Word " << i <<": ";
        cin >> s;
        sum_len = sum_len + s.length();
    }
    return sum_len / 5;
}
int main(){
    cout << "The average length of the words: " << Ask_Cal_Word_Len();
}

