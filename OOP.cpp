#include<iostream>
using namespace std;
typedef long long ll;


ll res;


class triangle {
    private:
        int length;
        int width;
    public:
        void setDimension(int l, int w){
            length = l;
            width = w;
        }
        int area(){
            return length * width;
        }
};

int main(){
    triangle react;
    react.setDimension(5, 10);
    cout << react.area() << endl;

}
