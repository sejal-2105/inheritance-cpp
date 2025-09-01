#include<iostream>
using namespace std;
//base class
class vehicle{
    public:
    string brand="ford";
    void colour(){
        cout<<"red!\n";
    }
};
//derived class
class  car:
public vehicle{
    public:
    string model="mustang";
};
int main(){
    car mycar;
    mycar.colour();
    cout<<mycar.brand+""+mycar.model;
    return 0;
}