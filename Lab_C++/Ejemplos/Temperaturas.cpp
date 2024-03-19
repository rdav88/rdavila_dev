#include <iostream>
using namespace std;

int main()
{
    double celsius;
    double fahrenheit;

    cout << "Ingrese la temperatura Celsius: ";
    cin >> celsius;

    fahrenheit = celsius * 9/5 + 32;

    cout << "La temperatura ingresada en grados celsius es equivalente a " << fahrenheit << " grados Fahrenheit." << endl;

    return 0;
}