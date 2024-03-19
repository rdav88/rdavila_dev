#include <iostream>
using namespace std;

int main()
{   
    //variables de tipo entero
    int area;
    int base;
    int lado;

    cout <<"Ingrese el lado del rectangulo: ";
    cin >> lado;

    cout <<"Ingrese la base del rectangulo: ";
    cin >> base;

    
    area = lado * base;
    //mensaje que muestra el area del cuadrado
    cout << "El area del cuadrado es: " << area << endl;

    return 0; 
     
}