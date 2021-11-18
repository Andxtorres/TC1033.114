#include <iostream>
#include "Paciente.h"
using namespace std;

int main(){
    Paciente p("Andres","5541302205");


    p.crearCita("20 de Diciembre de 2021",0);
    p.actualizarNotas("Cree una cita para Diciembre (Revisión)");
    p.imprimirCitas();
    p.imprimirNotas();
    p.imprimirTratamientos();

    p.actualizarNotas("Actualizando notas");
    p.insertarTratamiento("Limpieza",0);
    p.imprimirCitas();
    p.imprimirNotas();
    p.imprimirTratamientos();


    return 0;
}
