#include <iostream>
using namespace std;

int main () 
{
    int suma = 0; //declaracion de variables
    int i;

    for (i = 1; i <= 10; i++) //ciclo de for que sumara los numeros de 1 al 10
    {
        suma = suma + i; //proceso que suma el acumulador con la variable "i"
    }
    cout << "La suma de los numeros del 1 al 10 es: " << suma << endl; //mensaje de la suma de los numeros del 1 al 10

    return 0;
}