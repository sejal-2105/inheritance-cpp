#include<iostream>
#include<string>
using namespace std;
class jeans{
    public:
    string type[3]={"bootcut","wide leg","skinny"};
    void brand(){
        cout<<"H&M-&denim"<<endl;
    }
};
class bootcut:public jeans{
    public:
    string color="dark blue";
};
class WL:
public jeans{
    public:
    string color="black";
};
class skinny:
public jeans{
    public:
    string color="grey";
};
int main(){
    bootcut j1;
    cout<<endl;
    j1.brand();
    cout<<j1.type[0]<<j1.color<<endl; 
    
    WL j2;
    cout<<endl;
    j2.brand();
    cout<<j2.type[1]<<j2.color<<endl;
    
    skinny j3;
    cout<<endl;
    j3.brand();
    cout<<j3.type[2]<<j1.color<<endl;
}
