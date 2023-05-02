#include <iostream>
using namespace std;

inline double circle_area(double radius) {
  return 3.14 * radius * radius;
}
int main() {
    double r;
    cout<<"Enter radius of circle: ";
    cin>>r;
    cout<<"Area of circle of radius r= "<<r<<" is : "<<circle_area(r);
    return 0;
}