#ifndef POINT_H_DEFINED
#define POINT_H_DEFINED

#include <iostream>
#include "math.h"
using namespace std;

class Point{
    private: 
        double x;
        double y;
    public:
        Point();
        Point(double x, double y);
        double getX();
        double getY();
        void setX(double x);
        void setY(double y);
        double calculateDistance(Point point2);
};
#endif

Point::Point(double x,double y){
    this->x=x;
    this->y=y;
}

double Point::getX(){
    return x;
}
double Point::getY(){
    return y;
}

void Point::setX(double x){
    this->x=x;
}
void Point::setY(double y){
    this->y=y;
}

double Point::calculateDistance(Point point2){
    double distancia=0;
    distancia=sqrt(pow((x-point2.getX()),2)+pow((y-point2.getY()),2));
    return distancia;
}
