#include <iostream>
using namespace std;

class car{
    public:
    char model[10]="Mercedes";
    int year=2020;
    int rent=100000;
};

int main(){
    car c;
    int ch;
    cout<<"CHOOSE OPERATION"<<endl<<"Press 1 for Model name"<<endl<<"Press 2 for Maufacture Year"<<endl<<"Press 3 for rental cost"<<endl;
    cout<<"Enter number: ";
    cin>>ch;
    if (ch==1){
        cout<<"Model name: "<<c.model;
    }
    else if (ch==2){
        cout<<"Year of Manufacture: "<<c.year;
    }
    else{
        cout<<"Rental cost: "<<c.rent;
    }
    return 0;
}