#include <iostream>
using namespace std;

int main ()
{
    float numero; //variable de tipo float
    int num_entero; //variable de tipo entero

    cout << "Ingrese un numero entero: ";
    cin >> numero;

    //extraccion de la parte entera del numero
    num_entero = numero;

    try
    {
        if (numero != num_entero) //condicion si el numero no es igual a un numero entero
        {
            throw "El numero ingresado no es un numero entero.";
        }

        cout << "El numero entero ingresado es: " << numero << endl;
    }
    catch (const char* mensaje)
    {
        cout << "Excepcion capturada: " << mensaje << endl;
    }

    return 0;
}