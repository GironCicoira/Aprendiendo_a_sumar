#include <iostream>
#include <conio.h>

using namespace std;

int main() {
    int ordenar[100];
    int cant, i, pos, aux;

    cout<<"Ingrese la cantidad de numeros a ordenar ";
    cin>>cant;

    cout<<"\nIngrese los numeros a ordenar ";
    for (i=0; i<cant; i++){
        cin>>ordenar[i];
    }

    for (i=0; i<cant; i++) {
        pos = i;
        aux = ordenar[i];

        while((pos > 0) && (ordenar[pos-1] > aux)){
            ordenar[pos] = ordenar[pos-1];
            pos--;
        }
        ordenar[pos] = aux;
    }

    for (i=0; i<cant; i++) {
            cout<<ordenar[i];
        }

    getch();
    return 0;
}
