#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
typedef long long ll;

const ll maxN = 1e9;
const ll minN = -1e9;

class Temperature{
private:
    vector<double> temperatures;
public:
    void add_temperature(double temp){
        temperatures.push_back(temp);
    }
    double average(){
        double sum = double(0);
        double cnt = temperatures.size();
        for(ll i = 0; i < cnt; i++){
            sum += temperatures[i];
        }
        return sum / cnt;
    }
    double lowest_temperature(){
        ll min_temp = maxN;
        for(ll i = 0; i < temperatures.size(); i++){
            if(temperatures[i] < min_temp)
                min_temp = temperatures[i];
        }
        return min_temp;
    }
    double highest_temperature(){
        ll max_temp = minN;
        for(ll i = 0; i < temperatures.size(); i++){
            if(temperatures[i] > max_temp)
                max_temp = temperatures[i];
        }
        return max_temp;
    }
};

int main(){
    ll temp = 0;
    Temperature temps;
    cout << "Enter temperatures:" << endl;
    while(temp != 100){
        cin >> temp;
        if(temp == 100)
            continue;
        temps.add_temperature(temp);
    }
    cout << "Average temperatures: " << temps.average() << endl;
    cout << "Lowest temperature: " << temps.lowest_temperature() << endl;
    cout << "Highest temperature: " << temps.highest_temperature();
}   
/* 
Author: Ha Duc Thanh Vien
Student number: 2202863
Date: 27/4/2023
*/
