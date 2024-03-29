#include <iostream>
using namespace std;

int main()
{
    int antiguedad; //variable de tipo entero

    cout << "Ingrese la antigüedad del empleado (en años): "; 
    cin >> antiguedad; //almacenamiento de datos anteriormente proporcionados por el usuario.

    if (antiguedad >= 5) //condicion que se debe cumplir para que el empleado reciba el bono.
    {
        cout << "El empleado es elegible para el bono. Recibirá $1,000.";
    }
    // si la condicion no se cumple, el bono no sera otorgado al empleado.
    else
    { 
        cout << "El empleado no cumple con el requisito. No recibirá el bono de $1,000.";
    }
    return 0;
}