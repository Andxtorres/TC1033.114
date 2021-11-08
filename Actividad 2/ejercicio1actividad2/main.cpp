#include <iostream>
using namespace std;

int covierteOpcionAEntero(string opcion){
    if(opcion=="S"||opcion=="s"||opcion=="Suma"){
        return 1;
    }
    if(opcion=="R"||opcion=="r"||opcion=="Resta"){
        return 2;
    }    
    if(opcion=="M"||opcion=="m"||opcion=="Multiplicacion"){
        return 3;
    }
    return -1;
}

int main(){

    string opcion;
    do{
        cout<<"Dame la opción que quieres: \n S) Suma \n R) Resta \n M) Multiplicación \n Cualquier Tecla) Salir"<<endl;
        cin>>opcion;
        if(covierteOpcionAEntero(opcion)>0){
            float num1;
            float num2;
            cin>>num1;
            cin>>num2;
            float resultado=0;
            switch(covierteOpcionAEntero(opcion)){
                case 1:
                    resultado=num1+num2;
                    break;
                case 2: 
                    resultado=num1-num2;
                    break;
                case 3:
                    resultado=num1*num2;
                    break;
                default:
                    cout<<"Opción incorrecta"<<endl;
                    break;
                
            }   
            cout<<"El Resultado es "<<resultado<<endl; 

        }

    }while(covierteOpcionAEntero(opcion)>0);
    return 0;
}
