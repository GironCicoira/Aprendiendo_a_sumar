#include <iostream>
#include <conio.h>

using namespace std;

int main() {
    int numeros[100],n;

    cout<<"Digite el numeros de elementos que va tener el arreglo: ";
    cin>>n;

    for(int i=0; i<n; i++){
        cout<<"digite los elementos ";
        cin>>numeros[i];  //Guardando todos los elementos del vector
    }

    //Ahora, vamos a mostrar los elementos con sus indicesasociados
    for(int i=0; i<n; i++){
        cout<<i<<" -> "<<numeros[i]<<endl;
    }

    getch();
    return 0;
}
