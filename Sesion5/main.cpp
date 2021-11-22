#include <iostream>
#include "Point.h"
using namespace std;

int main(){

    Point punto1(30,30);

    cout<<"Las coordenadas del punto 1 son X: "<<punto1.getX()<< " Y: "<<punto1.getY()<<endl;

    Point punto2(10,20);

    cout<<"Las coordenadas del punto 2 son X: "<<punto2.getX()<< " Y: "<<punto2.getY()<<endl;

    cout<<"La distancia entre punto 1 y punto 2 es: "<<punto1.calculateDistance(punto2)<<endl;
    return 0;
}
