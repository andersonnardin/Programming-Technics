#ifndef POINT_H
#define POINT_H
#include <iostream>
using namespace std;
class Point{
float x;
float y;
public:
Point();
Point(float a, float b);
~Point();
void setx(float );
void sety(float );
float getx();
float gety();
};
#endif

