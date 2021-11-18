#include <iostream>
#include "Cita.h"

using namespace std;

class Paciente{

    private:
        string nombre;
        string telefono;
        string tratamientos[10];
        string notas;
        Cita citas[10];

    public: 
        Paciente(string nombre,string telefono);
        void crearCita(string cita, int pos);
        string getNombre();
        string getTelefono();
        string * getTratamientos();
        string getNotas();
        void actualizarNotas(string notas); 
        void imprimirNotas();
        void imprimirCitas();
        void imprimirTratamientos();
        void insertarTratamiento(string tratamiento, int pos);

};

Paciente::Paciente(string nombre,string telefono){
    this->nombre=nombre;
    this->telefono=telefono;
    for(int i=0;i<10;i++){
        tratamientos[i]="Vacio";
    }
    notas="Vacio";
}
void Paciente::crearCita(string cita, int pos){
    Cita c(cita);
    citas[pos]=c;
}
string Paciente::getNombre(){
    return nombre;
}
string Paciente::getTelefono(){
    return telefono;
}
string * Paciente::getTratamientos(){
    return tratamientos;
}
string Paciente::getNotas(){
    return notas;
}
void Paciente::actualizarNotas(string notas){
    this->notas+=" \n "+notas;
}

void Paciente::imprimirNotas(){
    cout<<"-------- Notas del paciente: "<<nombre<<" --------"<<endl;
    cout<<notas<<endl;
}
void Paciente::imprimirCitas(){
    cout<<"-------- Citas del paciente: "<<nombre<<" --------"<<endl;
    for(int i=0;i<10;i++){
        citas[i].imprimirCita();
    }
}
void Paciente::imprimirTratamientos(){
    cout<<"-------- Tratamientos del paciente: "<<nombre<<" --------"<<endl;
    for(int i=0;i<10;i++){
        cout<<tratamientos[i]<<endl;
    }
}

void Paciente::insertarTratamiento(string tratamiento,int pos){
    tratamientos[pos]=tratamiento;
}
