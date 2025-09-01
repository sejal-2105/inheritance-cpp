#include<iostream>
#include<string>
using namespace std;
class food{
    public:
    string cuisine="Indian";
    void type(){
        cout<<"asian"<<endl;
    }
};
class dish:
public food{
    public:
    string dish="biryani";
};
class restaurant:
public dish{
    public:
    string name="spice kitchen";
};
int main(){
    restaurant f3;
    f3.type();
    cout<<f3.cuisine<<"."<<f3.dish<<endl;
    cout<<"restaurant:"<<f3.name;
}
