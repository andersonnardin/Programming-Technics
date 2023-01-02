#include <iostream>
#include "Point.h"
using namespace std;

//constructors:
Point::Point(){
x=0; y=0;
cout<<"Point()"<<endl;
}
Point::Point(float a, float b){
x=a; y=b;
cout<<"Point(float, float)"<<endl;
}
Point::~Point(){
cout<<"~Point()"<<endl;
}

//methods:
void Point::setx(float a){
x=a;
}
void Point::sety(float b){
y=b;
}
float Point::getx(){
return x;
}
float Point::gety(){
return y;
}

