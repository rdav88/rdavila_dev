#include <iostream>
using namespace std;

int main()
{
    int area;
    int lado;

    cout <<"Ingrese el lado del cuadrado: ";
    cin >> lado; //variable que almacena la captura de dato en la linea 9

    area = lado * lado;

    cout << "El area del cuadrado es: " << area << endl;

    return 0;
    
}