#include <iostream>
using namespace std;

class vaccine{
    public:

    virtual void putvaccine(){
        cout<<"Covid Vaccine"<<endl;
    }
};

class covaxin:public vaccine{
    void putvaccine(){
        cout<<"Covaxin"<<endl;
    }
};

class covishield:public vaccine{
    void putvaccine(){
        cout<<"CoviShield"<<endl;
    }
};

int main(){
    covaxin cx;
    covishield cs;
    vaccine *o;
    o=&cx;
    o->putvaccine();
    o=&cs;
    o->putvaccine();
}