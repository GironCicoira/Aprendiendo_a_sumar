/*Desarrolle un programa que lea la entrada estandar un vector de enteros y determine el mayor elemento del vector*/
#include <iostream>
#include <conio.h>

using namespace std;

int main() {
    int numeros[100],n,mayor=0;

    cout<<"Digite la cantidad de numeros que desea ingresar";
    cin>>n;

    for (int i=0; i<n; i++){
        cout<<i+1<<". Digite un numero";
        cin>>numeros[i];

        if(numeros[i]>mayor){
            mayor = numeros[i];
        }
    }

    cout<<"\nEl mayor de los numeros ingresados es el "<<mayor<<endl;

    getch();
    return 0;
}
