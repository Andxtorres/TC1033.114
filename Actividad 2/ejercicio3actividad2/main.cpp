#include <iostream>
using namespace std;

int main(){
    int suma=0;
    for (int i=0;i<=100;i+=2){
        suma+=i;//Es igual que suma=suma+i;
        
    }

    cout<<"El resultado de la suma de pares de 0 a 100 es "<<suma<<endl;

    return 0; 
}
