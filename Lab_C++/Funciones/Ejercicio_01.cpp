#include <iostream>
using namespace std;

int sueldo = 0;
int ventas = 0;
const int bono = 125;

int main()
{
    cout << "Ingrese las ventas del empleado: $";
    cin >> ventas;

    sueldo = ventas * 0.15;

    if (ventas >= 1500)
    {
        sueldo = sueldo + bono;
    }
cout << "El sueldo del empleado (con bono si aplica) es de: $" << sueldo << endl;

    return 0;
}