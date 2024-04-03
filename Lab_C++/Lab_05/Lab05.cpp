#include <iostream>
using namespace std;

int main()
{
    string membresia;
    int num_entradas;

    cout << "¿Es usted miembro del teatro? (si/no): "; //ingreso de datos del usuario
    cin >> membresia;

    cout << "¿Que cantidad de entradas compro?: ";
    cin >> num_entradas; //captura de datos a variable

    if (membresia == "si") //condicion que de cumplir obtendra un descuento de 10%
    {
        if (num_entradas > 5) //condicion que de cumplir se le agregara 5% al ya 10% si cumple primera condicion
        {
            cout << "Usted es elegible para un descuento de 15%."; //mensaje de salida al usuario
        }
        else 
        {
            cout << "Usted es elegible para un descuento de 10%.";
        }
    }
    else 
    {
        if (num_entradas > 10) //condicion que determina si hay un 5% de descuento
        {
            cout << "Usted es elegible para un descuento de 5%.";
        }
        else// de no cumplirse la condicion, no hay descuento para el usuario
        {   
            cout << "Usted no es elegible para el descuento.";
        }
    }
    
    return 0;

}