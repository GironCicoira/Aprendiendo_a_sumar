#include <iostream>
#include <conio.h>

using namespace std;

int main() {
    int ordenar[100];
    int cant, i, j, aux, min;

    cout<<"Ingrese la cantidad de numeros a ordenar ";
        cin>>cant;

    cout<<"\nIngrese los numeros a ordenar ";
        for (i=0; i<cant; i++) {
           cin>>ordenar[i];
        }

    //metodo de ordenamiento
    for (i=0; i<cant; i++){
        min = i;
        for(j=i+1; j<cant; j++){
            if (ordenar[j] < ordenar[min]){
                min = j;
            }
        }
        aux = ordenar[i];
        ordenar[i] = ordenar[min];
        ordenar[min] = aux;
    }

    cout<<"los numeros a ordenar son: ";
    for (i=0; i<cant; i++) {
            cout<<ordenar[i];
        }

    getch();
    return 0;
}
