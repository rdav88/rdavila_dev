#include <iostream>
#include <cmath> //librerias que permiten utilizar funciones matematicas
using namespace std;

const double PI = 3.14; //definir variable global y constante

double calcularAreaCirculo(double radio); //definir funcion

int main()
{
    double radio;
    cout << "Introduce el radio del circulo: ";
    cin >> radio;

    if (radio < 0)
    {
        cout << "El radio ingresado no es valido. Por favor, introduce un valor del radio no negativo. " << endl;
    }
    else
    {
        double area = calcularAreaCirculo(radio); //llamada a la funcion

        cout << "El area del circulo con radio " << radio << " es: " << area << endl;
    }
    return 0;
}

double calcularAreaCirculo(double radio)
{
    return PI * pow(radio, 2); //calculando el area del circulo
}