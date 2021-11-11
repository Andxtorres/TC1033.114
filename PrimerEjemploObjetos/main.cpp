#include <iostream>
#include "Triangulo.h"
using namespace std;

int main(){

    Triangulo t;
    cout<<"La base del triangulo es: "<<t.getBase()<<" la altura es: "<<t.getAltura()<<" y el área es: "<<t.calcularArea()<<endl;
    return -1;
}
