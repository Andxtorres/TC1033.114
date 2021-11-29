#include <iostream>
#include "Salon.h"
#include "Alumno.h"
using namespace std;

int main(){
    Alumno a1("Andrés ", "A01211914",90);
    Alumno a2("Juan ", "A01211915",95);
    Alumno a3("Pedro ", "A01211916",70);
    Alumno a4("Luis ", "A01211917",100);
    Alumno a5("Francisco ", "A01211918",80);
    Salon s1("TC1033.114");
    s1.agregarAlumno(a1,0);
    s1.agregarAlumno(a2,1);
    s1.agregarAlumno(a3,2);
    s1.agregarAlumno(a4,3);
    s1.agregarAlumno(a5,4);
    s1.imprimeSalon();
    cout<<"El promedio del salon es: "<<s1.calculaPromedio()<<endl;
    return 0;
}
