#include <iostream>
using namespace std;

class employee{
    public:
    int emp_num;
    char name[20],designation[20];

    void getemp(){
        cout<<"Enter Employee Number: ";
        cin>>emp_num;
        cout<<"Enter employee name: ";
        cin>>name;
        cout<<"Enter employee desigation: ";
        cin>>designation;
    }

    void putemp(){
        cout<<"Employee Number: "<<emp_num<<endl;
        cout<<"Employee name: "<<name<<endl;
        cout<<"Employee designation: "<<designation<<endl;
    }
};

class salary:public employee{
    public:
    int basic,hra,da,pf,tot;
    void getsal(){
        cout<<"Enter base salary: ";
        cin>>basic;
        cout<<"Enter House Rent Allowance(HRA): ";
        cin>>hra;
        cout<<"Enter Dearness Allowace (DA): ";
        cin>>da;
        cout<<"Enter provident fund (PF): ";
        cin>>pf;
        tot=basic+hra+da+pf;
    }

    void putsal(){
        putemp();
        cout<<"Base salary: "<<basic<<endl;
        cout<<"HRA: "<<hra<<endl;
        cout<<"DA: "<<da<<endl;
        cout<<"PF: "<<pf<<endl;
        cout<<"Total Salary: "<<tot<<endl;
    }
};

class bank_details:public salary{

    public:
    char bank[20];
    long long int acc_no;

    void getacc(){
        cout<<"Enter bank name: ";
        cin>>bank;
        cout<<"Enter accout number: ";
        cin>>acc_no;
    }

    void putacc(){
        cout<<"Bank: "<<bank<<endl;
        cout<<"Account Number: "<<acc_no<<endl;
        putsal();
    }
};

int main(){
    bank_details b;
    b.getemp();
    cout<<"*********************************************"<<endl;
    b.putemp();
    cout<<"*********************************************"<<endl;
    b.getsal();
    cout<<"*********************************************"<<endl;
    b.putsal();
    cout<<"*********************************************"<<endl;
    b.getacc();
    cout<<"*********************************************"<<endl;
    b.putacc();
    cout<<"-------------------END OF OPERATION---------------";
}