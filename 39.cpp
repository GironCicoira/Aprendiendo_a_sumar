#include <iostream>
#include <conio.h>

using namespace std;

int main() {
    int matrizA[3][3];
    int filas=0, columnas=0, contador=0;

    cout<<"ingrese el numero de filas de la matriz";
    cin>>filas;

    cout<<"ingrese el numero de columnas de la matriz";
    cin>>columnas;

    cout<<"Ingrese los valores de la matriz para comparar si es una matriz simetrica\n";
    for (int i=0; i<filas; i++){
        for (int j=0; j<columnas; j++){
            cout<<"-->["<<i+1<<"]["<<j+1<<"]";
            cin>>matrizA[i][j];
        }
    }

    cout<<"matriz ingresada\n";
    for (int i=0; i<filas; i++){
        for (int j=0; j<columnas; j++) {
            cout<<matrizA[i][j];
        }
        cout<<"\n";
    }
    cout<<"\n";

    if (filas == columnas) {
        cout << "matriz transpuesta\n";
        for (int i = 0; i < filas; i++) {
            for (int j = 0; j < columnas; j++) {
                cout << matrizA[j][i];
            }
            cout << "\n";
        }
    }
    cout<<"\n";

    if (filas = columnas) {
        for (int i = 0; i<filas; i++) {
            for (int j = 0; j<columnas; j++) {
                if (matrizA[i][j] == matrizA[j][i]) {
                    contador++;
                }
            }
        }
    }


    if (contador==(filas*columnas)){
        cout<<"La matriz ingresada es simetrica";
    }
    else{
        cout<<"La matriz ingresada no es simetrica";
    }

    getch();
    return 0;
}
