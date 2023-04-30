#include<iostream>
using namespace std;
typedef long long ll;


ll res;


class triangle {
    public:
        int length;
        int width;
    public:
        void setDimension(int length, int width){
            this->length = length;
            this->width = width;
            //cout << length << endl;
        }
        int area(){
            return length * width;
        }
        int get_length(){
            return length;
        }
};

int main(){
    triangle react;
    react.setDimension(5, 10);
    cout << react.area() << endl;
    cout << react.get_length() << endl;
    cout << react.length;
}
