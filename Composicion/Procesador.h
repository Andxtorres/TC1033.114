#include <iostream>
using namespace std;

class Procesador{
    private:
        string marca;
        double frecuencia;
    public:
        Procesador();
        Procesador(string marca,double frecuencia);
        double getFrecuencia();
        string getMarca();
        void setFrecuencia(double frecuencia);
        void setMarca(string marca);
        void imprimeProcesador();

};
Procesador::Procesador(){
    marca="Sin Marca";
    frecuencia=0.0;
}
Procesador::Procesador(string marca,double frecuencia){
    this->marca=marca;
    this->frecuencia=frecuencia;
}
double Procesador::getFrecuencia(){
    return frecuencia;
}
string Procesador::getMarca(){
    return marca;
}
void Procesador::setFrecuencia(double frecuencia){
    this->frecuencia=frecuencia;
}
void Procesador::setMarca(string marca){
    this->marca=marca;
}
void Procesador::imprimeProcesador(){
    cout<<"Procesador: "<<marca<<" "<<frecuencia<<endl;
}
