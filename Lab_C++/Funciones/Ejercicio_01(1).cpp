#include <iostream>
using namespace std;

//variables globales para usar dentro de la funcion y el programa principal
double sueldo = 0;
double ventas = 0;
//constante tipo double con el bono al empleado si alcanza las ventas
const int bono = 125;

double SueldoEmpleado(); //declaracion de funcion

int main()
{   //ingreso de datos del usuario
    cout << "Ingrese las ventas del empleado: $"; 
    cin >> ventas;
//imprime el sueldo del empleado invocando la funcion
cout << "El sueldo del empleado (con bono si aplica) es de: $" << SueldoEmpleado() << endl;

    return 0;
}
//funcion que calcula el sueldo del empleado
double SueldoEmpleado()
{
sueldo = ventas * 0.15;

    if (ventas >= 1500)
    {
        sueldo = sueldo + bono;
    }
return sueldo;
}