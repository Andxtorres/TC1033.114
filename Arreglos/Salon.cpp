#include "Salon.h"

Salon::Salon(){
    clave="Sin clave";
}
Salon::Salon(string clave){
    this->clave=clave;
}
void Salon::agregarAlumno(Alumno alumno, int pos){
    alumnos[pos]=alumno;
}
void Salon::imprimeSalon(){
    cout<<"El salón "<<clave<<" tiene a los alumnos: "<<endl;
    for (int i=0;i<5;i++){
        alumnos[i].imprimeAlumno();
    }
}
double Salon::calculaPromedio(){
    double total=0;
    int numAlumnos=0;
    for (int i=0;i<5;i++){
        numAlumnos++;
        total=total+alumnos[i].getCalificacion();
    }    
    return total/numAlumnos;
}

Salon::~Salon(){
    
}
