#include <iostream>
#include "Procesador.h"
using namespace std;

class Computadora{
    private: 
        string marca;
        int pulgadas;
        Procesador procesador;
    public:
        Computadora();
        Computadora(string marca, int pulgadas, Procesador procesador);
        int getPulgadas();
        string getMarca();
        void setPulgadas(int pulgadas);
        void setMarca(string marca);
        void imprimeComputadora();
        
};
Computadora::Computadora(){
    marca="Sin Marca";
    pulgadas=0;
    procesador=Procesador("Sin marca",0.0);
}
Computadora::Computadora(string marca, int pulgadas,Procesador procesador){
    this->marca=marca;
    this->pulgadas=pulgadas;
    this->procesador=procesador;
}
int Computadora::getPulgadas(){
    return pulgadas;
}
string Computadora::getMarca(){
    return marca;
}
void Computadora::setPulgadas(int pulgadas){
    this->pulgadas=pulgadas;
}
void Computadora::setMarca(string marca){
    this->marca=marca;
}

void Computadora::imprimeComputadora(){
    cout<<"Marca: "<<marca<<" "<<pulgadas<<" pulgadas "<<" ";
    procesador.imprimeProcesador();
    
}
