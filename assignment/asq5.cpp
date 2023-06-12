#include <iostream>
using namespace std;

class Car {
public:
    string model="Mercedes";
    int year=2020;
    double rentalPrice=20000;

    Car(string model, int year, double rentalPrice) {
        
        this->model = model;
        this->year = year;
        this->rentalPrice = rentalPrice;
    }
};

int main(){
    class Car c;
    int ch;
    cout<<"CHOOSE OPERATION"<<endl<<"Press 1 for model"<<endl<<"Press 2 for Maufacture Year"<<endl<<"Press 3 for rental cost"<<endl;
    cout<<"Enter number: ";
    cin>>ch;
    if (ch==1){
        cout<<"Model name: "<<c.model;
    }
    else if (ch==2){
        cout<<"Year of Manufacture: "<<c.year;
    }
    else{
        cout<<"Rental cost: "<<c.rentalPrice;
    }
    return 0;
}