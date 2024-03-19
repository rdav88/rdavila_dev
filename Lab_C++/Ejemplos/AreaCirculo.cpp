#include <iostream>
using namespace std;

int main()
{
    //definicion de variables 
    double area;
    double radio;

    //variables de mismo tipo pueden ir en la misma linea separadas de una coma

    const double PI = 3.14; //Identificador constante 

    cout << "Ingrese la medida del radio: ";
    cin >> radio;

    area = PI * radio * radio;

    cout <<"El area del circulo es: " << area << endl;

    return 0;
}