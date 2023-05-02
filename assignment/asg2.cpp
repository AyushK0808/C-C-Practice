#include <iostream>
using namespace std;

class student{
    public:
    char name[20];
    int id,age;
    void getstu(){
        
        cout<<"Enter Student name: ";
        cin>>name;
        cout<<"Enter Student ID: ";
        cin>>id;
        cout<<"Enter Student age: ";
        cin>>age;
        cout<<"-------------------------------------------------"<<endl;
    }

    void putstu(){
        cout<<endl<<"Student name: "<<name<<endl;
        cout<<"Student ID: "<<id<<endl;
        cout<<"Student Age: "<<age<<endl;
        cout<<"-------------------------------------------------"<<endl;
    }
};

class UnderGraduate:public student{
    public:
    int ugcourses;

    void getUGCourses(){
        cout<<"Enter the number of UG Courses: ";
        cin>>ugcourses;
    }

    void putUGCourses(){
        cout<<"Number of UG Courses allocated: "<<ugcourses<<endl;
    }
};

class PostGraduate:public student{
    public:
    int pgcourses;
    
    void getPGCourses(){
        cout<<"Enter the number of PG Courses: ";
        cin>>pgcourses;
    }

    void putPGCourses(){
        cout<<"Number of PG Courses allocated: "<<pgcourses<<endl;
    }
};

int main(){
    PostGraduate pg;
    UnderGraduate ug;
    
    ug.getstu();
    ug.getUGCourses();
    pg.getPGCourses();
    cout<<"-------------------------------------------------"<<endl;
    ug.putstu();
    if (ug.ugcourses>10 || pg.pgcourses>10){
        cout<<"ERROR!";
    }
    else{
        ug.putUGCourses();
        pg.putPGCourses();
    }
    return 0;
}
