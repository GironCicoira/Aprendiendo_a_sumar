/* 1. Escribe un programa que defina un vector de numeros y calcule la suma de sus elementos. */

#include <iostream>
#include <conio.h>

using namespace  std;

int main() {
    int numeros[10]={1,2,3,4,5,6,7,8,9,10};
    int suma = 0;

    for(int i=0; i<10;i++){
        suma = suma + numeros[i];
    }

    cout<<"suma de los elementos es: "<<suma<<endl;


    getch();
    return 0;
}
