#include <iostream>
#include "Computadora.h"
using namespace std;
int main(){
    
    Computadora c1;
    Procesador p1("Intel i9",4.0);
    Computadora c2("Apple",15,p1);
    c1.imprimeComputadora();
    c2.imprimeComputadora();
    return 0;
}


