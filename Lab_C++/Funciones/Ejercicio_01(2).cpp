#include <iostream>
using namespace std;

int sueldo = 0;
int ventas = 0;
int sueldo_empleado = 0;
const int bono = 125;

int SueldoEmpleado(int sueldo_empleado);

int main()
{
    if (ventas >= 1500)
    {
        sueldo = sueldo + bono;
    }
    
    cout << "Ingrese las ventas del empleado: $";
    cin >> ventas;

cout << "El sueldo del empleado (con bono si aplica) es de: $" << SueldoEmpleado(sueldo_empleado) << endl;

    return 0;
}

int SueldoEmpleado(int sueldo_empleado)
{
    return sueldo = ventas * 0.15;
}