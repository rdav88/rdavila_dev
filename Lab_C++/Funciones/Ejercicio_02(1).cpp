#include <iostream>
using namespace std;

//variables globales para el uso en funciones y el programa principal
double sueldo;
const int bono = 125;
//declaracion de funcion que devuelve el sueldo del empleado
double SueldoEmpleado(double sueldo);

int main()
{
//variable tipo double local para el uso del programa principal
double ventas;
//solicita al usuario ingresar las ventas del empleado
cout << "Ingrese las ventas del empleado: $";
cin >> ventas;
//calculo de las ventas basado en el 15% de las ventas
sueldo = ventas * 0.15;

if (ventas >= 1500)
    {
    sueldo = sueldo + bono;
    }
//mensaje que imprime el sueldo del empleado y un bono si aplica
cout << "El sueldo del empleado (con bono si aplica) es de: $" << SueldoEmpleado(sueldo) << endl;

    return 0;
}
//funcion que devuelve el sueldo del empleado
double SueldoEmpleado(double sueldo)
{
    return sueldo;
}