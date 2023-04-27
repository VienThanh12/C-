#include<iostream>
#include<map>
#include<string>
using namespace std;
typedef long long ll;


class Car {
private:
    string number;
    bool paid;
public:
    Car(string reg){ // constructor
        number = reg;
        paid = false;
    }   
     string getRegNumber() {
        return number;
    }

    bool isPaid() {
        return paid;
    }

    void setPaid() {
        paid = true;
    }

};
int main()
{

    string input;
    string reg;
    int id = 1;

    map<int, Car*> parking_lot;
    while (true)
    {
        cout << "Choose:\n1 = Drive inside\n2 = Pay for parking\n3 = Drive out\n0 = Stop\n";
        cin >> input;

        if (input == "1") {
            cout << "Enter the registration number> ";
            cin >> reg;
            Car* car = new Car(reg);
            parking_lot[id] = car;
            cout << "Your parking ID is " << id << endl;
            id += 1;
        }
        else if (input == "2") {
            cout << "Enter your parking ID > ";
            cin >> id;
            Car* car = parking_lot[id];
            cout << "Thank you for the payment: " << car->getRegNumber()  << endl;
        }
        else if (input == "3") {
            cout << "Enter the registration number> ";
            cin >> reg;
            Car* car = parking_lot[id];
            if (car->isPaid() == false) {
                cout << "Drive out. Have a nice trip!" << endl;
            }
            else if (car->isPaid() == true)  {
                cout << "Pay for parking first" << endl;
            }

        }
        else break;
    }
}
/* 
Author: Ha Duc Thanh Vien
Student number: 2202863
Date: 27/4/2023
*/
