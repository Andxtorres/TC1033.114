#include <iostream>
using namespace std;

int main(){

    int numeros;
    cin>>numeros;
    int suma=0;
    cout<<"Suma: "<<suma<<endl;
    for (int i=0;i<numeros;i++){
        int numero;
        cout<<"Dame el numero"<<endl;
        cin>>numero;
        suma+=numero;

    }
    cout<<"Suma: "<<suma<<endl;
    cout<<"Numeros: "<<numeros<<endl;
    cout<<"La media aritmetica es: "<<(suma/numeros)<<endl;
    return 0;
}
