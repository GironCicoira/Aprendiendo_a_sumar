/*15. Realice un programa que solicite al usuario introducir un numero entero entre el 1 y el 100. EL programa debe generar unnumero aleatorio en ese mismo rango[1-100], e indicarle al usuario si el numero que digito es menor o mayor al numero aleatorio, asi hasta que lo adivine. y por ultimo mostrar el numero de intentos que le llevo lograrlo.*/

#include <iostream>
#include<stdlib.h>
#include <time.h>

using namespace std;

int main() {
    int numero, dato, contador = 0;

    srand(time(NULL));//genera un numero aleatorio
    dato = 1 + rand()%(100);

    do{
        cout<<"Digita un numero: "; cin>>numero;

        if(numero>dato) {
            cout << "\nDigite un numero menor\n";
        }
        if(numero<dato){
            cout<<"\nDigite un numero mayor\n";
        }
        contador++;
    }while(numero != dato);

    cout<<"\nFelicidades adivinaste el numero!!!\n";
    cout<<"en el intento numero "<<contador;cout<<"\n";


    system("pause");
    return 0;
}
