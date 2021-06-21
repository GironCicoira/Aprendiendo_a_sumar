/*Copiar 5 valores ingresador en un vector, y reescribir un nuevo vector que sea el multiplo de dos del primer vector*/
#include <iostream>
#include <conio.h>

using namespace std;

int main() {
    int numeros1[5];
    int numeros2[5];

    for (int i=0; i<5; i++){
        cout<<"digite los numeros del primer vector"
              "";
        cin>>numeros1[i];
    }

    for (int i=0; i<5; i++){
        numeros2[i] = 2*(numeros1[i]);
    }

    for (int i=0; i<5; i++) {
        cout << "El nuevo vector es " << numeros2[i]<< endl;
    }

    getch();
    return 0;
}