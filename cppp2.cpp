#include<iostream>
#include<string>
using namespace std;
class vehicle{
    public:
    string company="ford";
    void type(){
        cout<<"mustang"<<endl;
    }
};
class specs{
    public:
    string mileage="8 kmpl";
    void colour(){
        cout<<"grey"<<endl;
    }
};
class car:
public vehicle,public specs{
    public:
    string seater="4 seater";
};
int main(){
    car f2;
    f2.colour();
    cout<<f2.company<<"";
    f2.type();
    cout<<"("<<f2.seater<<")"<<endl<<"MILEAGE:"<<f2.mileage<<endl;
}