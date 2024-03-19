#include <iostream>
using namespace std;

int main()
{
    //declaracion de variables
    int examen1;
    int examen2;
    int examen3;
    int examen4;
    int promedio;

    //ingreso de valores para almacenar
    cout << "Ingrese el valor del primer examen: ";
    cin >> examen1;

    cout << "Ingrese el valor del segundo examen: ";
    cin >> examen2;

    cout << "Ingrese el valor del tercer examen: ";
    cin >> examen3;

    cout << "Ingrese el valor del cuarto examen: ";
    cin >> examen4;
    //proceso matematico que determinara el promedio del estudiante
    promedio = (examen4 + examen3 + examen2 + examen1) /4;

    cout <<"El promedio del estudiante es " << promedio << endl;

    return 0;
}