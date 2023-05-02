#include <iostream>
using namespace std;

class book{
    public:
    char title[60]="The Lord of the Rings";
    char author[30]="J R R Tolkien";
    long long int isbn=97043301333;
};

int main(){
    class book b;
    int fun;
    cout<<"------------------------------------------------------"<<endl;
    cout<<endl;
    cout<<"WELCOME TO BOOK DETAILS FINDER"<<endl;
    cout<<"------------------------------------------------------"<<endl;
    cout<<endl;
    cout<<"Press 1 for Book Title"<<endl<<"Press 2 for Author name"<<endl<<"Press 3 for ISBN"<<endl;
    cout<<endl;
    cout<<"Enter detail you require: ";
    cin>>fun;
    if (fun==1){
        cout<<endl<<"The Title of book is: ";
        cout.write(b.title,60);
        cout<<endl<<"------------------------------------------------------"<<endl;
    }
    else if (fun==2){
        cout<<endl<<"The name of the author is: ";
        cout.write(b.author,30);
        cout<<endl<<"------------------------------------------------------"<<endl;
    }
    else if (fun==3){
        cout<<endl<<"ISBN: ";
        cout<<b.isbn;
        cout<<endl<<"------------------------------------------------------"<<endl;
    }
    cout<<endl<<"THANK YOU FOR USING. PLEASE COME AGAIN!";
}