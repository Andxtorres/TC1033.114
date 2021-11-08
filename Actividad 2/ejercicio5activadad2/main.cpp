#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

using namespace std;

int main(){
    srand(time(0));
    int aleatorio= rand()%((100-0)+1);
    int numeroAdivinado=0;
    int intentos=1;


    do{
        cout<<"Ahora adivina: "<<endl;
        cin>>numeroAdivinado;
        if(aleatorio>numeroAdivinado){
            cout<<"Mas"<<endl;
        }else if(aleatorio<numeroAdivinado){
            cout<<"Menos"<<endl;
        }else{
            cout<<"Adivinaste!! el número era "<<aleatorio<<" en "<<intentos<<" intentos "<<endl;
        }
        intentos++;

    }while(numeroAdivinado!=aleatorio);
    return 0;
}
