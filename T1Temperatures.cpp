#include<iostream>
using namespace std;

typedef long long ll;

int tempe_value[10];

ll Average(){
    ll ave = 0;
    for(ll i = 1; i <= 5; i++)
        ave += tempe_value[i];
    return ave / 5;
}
ll Print_On_Console(){
    cout << "Average temperature: "  << Average() << "°C\n";
;
}

int main(){
    cout << "Enter 5 temperature values" << endl;
    for(ll i = 1; i <= 5; i++){
        cout << "Temperature " << i << ": ";
        cin >> tempe_value[i];
    }
    Print_On_Console();
}
