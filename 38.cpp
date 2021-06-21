/* Realizar un programa que lea una matriz 3x3* y cree una matriz transpuesta.
La matriz transpuesta es, la que invierta las filas por las columnas*/

#include <iostream>
#include <conio.h>

using namespace std;

int main() {
    int matrizA[3][3]={{1,2,3},{4,5,6},{7,8,9}};
    int matrizT[3][3];

//ingresar datos a la matriz
    for (int i=0; i<3; i++){
        for(int j=0; j<3; j++){
            cout<<"increse la matriz par a la posicion --> ["<<i<<"]["<<j<<"]";
            cin>>matrizA[i][j];
        }
    }

//invertir matriz
    for (int i=0; i<3; i++){
        for(int j=0; j<3; j++){
            matrizT[j][i]=matrizA[i][j];
        }
    }

//Mostrar matriz ingresada
    cout<<"La matriz ingresada es: \n";
    for (int i=0; i<3; i++){
        for(int j=0; j<3; j++){
            cout<<matrizA[i][j];
        }
        cout<<"\n";
    }
    cout<<"\n";

//Mostrar matriz transpuesta
    cout<<"La matriz tranpuesta es: \n";
    for (int i=0; i<3; i++){
        for(int j=0; j<3; j++){
            cout<<matrizT[i][j];
        }
        cout<<"\n";
    }

    getch();
    return 0;
}
