#include <iostream>
using namespace std;

int main()
{
    //definicion de variables
    int area;
    int perimetro;
    int base;
    int altura;

    //solicitar los datos para calcular el area y perimetro del rectangulo
    cout <<"Ingrese la base del rectangulo: ";
    cin >> base;

    cout <<"Ingrese el altura del rectangulo: ";
    cin >> altura;

    //procesos matematicos que determinan el area y perimetro del rectangulo
    area = base * altura;
    perimetro = 2 * (base + altura);

    cout << "El area del rectangulo es: " << area << endl;
    cout << "El perimetro del rectangulo es: " << perimetro << endl;

    return 0;

}