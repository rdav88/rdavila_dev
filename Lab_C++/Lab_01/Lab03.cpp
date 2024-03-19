#include <iostream>
using namespace std;

int main()
{
    int fechaNacimiento;
    int fechaActual;
    int edad;

    cout <<"Ingrese el año de nacimiento del usuario: ";
    cin >> fechaNacimiento;

    cout <<"Ingrese la año actual: ";
    cin >> fechaActual;

    edad = fechaActual - fechaNacimiento;

    //mensaje que se mostrara junto con la edad del usuario
    cout <<"La edad del usuario es: " << edad << endl;

    return 0;

}