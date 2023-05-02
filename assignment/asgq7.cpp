#include <iostream>
using namespace std;

class Person{
    char name[20];
    int age;
    public:
    void getp(){
        cout<<"Enter Name: ";
        cin>>name;
        cout<<"Enter Age: ";
        cin>>age;
    }

    void disp(){
        cout<<endl<<"-------------------------------------"<<endl;
        cout<<"Name: "<<name<<endl;
        cout<<"Age: "<<age<<endl;
    }
};

int main(){
    class Person p;
    p.getp();
    p.disp();
    return 0;
}