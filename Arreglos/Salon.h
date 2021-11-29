#include <iostream>
#include "Alumno.h"

class Salon{

    private:
        string clave;
        Alumno alumnos[5];

    public: 
        Salon();
        Salon(string clave);
        void agregarAlumno(Alumno alumno, int pos);
        void imprimeSalon();
        double calculaPromedio();

};
