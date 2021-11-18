#include <iostream>

using namespace std;

class Cita{

    private:
        string fecha;
        bool activa;

    public:
        Cita();
        Cita(string fecha);
        void cancelar();
        void cambiarFecha(string fecha);
        void imprimirCita();


};

Cita::Cita(){
    fecha="Sin cita";
    activa=false;
}

Cita::Cita(string fecha){
    this->fecha=fecha;
    activa=true;
}

void Cita::cancelar(){
    activa=false;
}

void Cita::cambiarFecha(string fecha){
    this->fecha=fecha;
}

void Cita::imprimirCita(){
    cout<<"Fecha: "<<fecha<<" Status: "<<activa<<endl;
}
