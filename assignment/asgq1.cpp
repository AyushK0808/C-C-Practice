#include <iostream>
using namespace std;

class student{ 
    protected:
    int id;
    char name[20];

    public:

    void getstu(){
        cout<<"Enter Student ID: ";
        cin>>id;
        cout<<"Enter Student Name: ";
        cin>>name;
        cout<<"-------------------------------------------------";
    }

    void putstu(){
        cout<<endl<<"Student ID: "<<id<<endl;
        cout<<"Student Name: "<<name<<endl;
        cout<<"-------------------------------------------------";
    }


};

class marks: public student{
    protected:
    int m1,m2,m3;
    

    public:
    void getmarks(){
        cout<<endl<<"Enter marks in Subject 1: ";
        cin>>m1;
        cout<<"Enter marks in Subject 2: ";
        cin>>m2;
        cout<<"Enter marks in Subject 3: ";
        cin>>m3;
        cout<<"-------------------------------------------------";
    }

    void putmarks(){
        cout<<endl<<"Marks obtained by "<<name<<endl;
        cout<<"Subject 1: "<<m1<<endl;
        cout<<"Subject 2: "<<m2<<endl;
        cout<<"Subject 3: "<<m3<<endl;
        cout<<"-------------------------------------------------";
    }
};

class result:public marks{

public:
    void show(){
        cout<<endl<<"Total Marks obtained by "<<name<<" : "<<m1+m2+m3<<endl;
        cout<<"Average Marks across 3 subjects by "<<name<<" : "<< (m1+m2+m3)/3<<endl;
    }
};

int main(){
    result r;
    r.getstu();
    r.putstu();
    r.getmarks();
    r.putmarks();
    r.show();
}