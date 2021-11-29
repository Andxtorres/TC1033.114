#ifndef ALUMNO_DEFINDED
#define ALUMNO_DEFINDED
#include <iostream>
using namespace std;

class Alumno{

    private:
        string nombre;
        string matricula;
        int calificacion;

    public:
        Alumno();
        Alumno(string nombre, string matricula);
        Alumno(string nombre, string matricula,int calificacion);
        void setNombre(string nombre);
        void setMatricula(string matricula);
        void setCalificacion(int calificacion);
        string getNombre();
        string getMatricula();
        int getCalificacion();
        void imprimeAlumno();

};
#endif
