#include <iostream>
#include "Point.h"
using namespace std;
int main(){
Point p1;
Point p2(3,4.1);
//p1.x=6.3; //error: compile-time
cout<<"p1 "<<p1.getx()<<" " <<p1.gety()<<endl;
p2.setx(-3.3);
cout<<"p2 "<<p2.getx()<<" " <<p2.gety()<<endl;
}