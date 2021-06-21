/*Hace una matriz de tipo entera de 2 * 2 , llenarla de numeros y volvarla a otra matriz*/
#include <iostream>
#include <conio.h>

using namespace std;

int main() {
    int matrizA[100][100];
    int matrizB[100][100];

//ingreso los valores de las matrices
    for (int i=0; i<2; i++){
        for (int j=0; j<2; j++){
            cout<<"introduce el valor para --> ["<<i<<"]["<<j<<"]";
            cin>>matrizA[i][j];
        }
    }

//igualo la matrices
    for (int i=0; i<2; i++) {
        for (int j = 0; j < 2; j++) {
            matrizB[i][j] = matrizA[i][j];
        }
    }

//leo los valores de la matriz copiada
    for (int i=0; i<2; i++) {
        for (int j = 0; j < 2; j++) {
            cout<< matrizB[i][j];
        }
        cout<<"\n";
    }

    getch();
    return 0;
}
