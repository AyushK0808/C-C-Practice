#include <iostream>
using namespace std;
class s
{
int m,n;
public:
void input(void);
void display(void);
int largest(void);
};
int s:: largest(void)
{
if(m>n)
return m;
else
return n;
}
void s:: input(void)
{
cin>>m>>n;
}
void s::display(void)
{
cout<<"Largest value="<<
largest()<< "\n";
}
int main()
{
s A;
A.input();
A.display();
return 0;
}