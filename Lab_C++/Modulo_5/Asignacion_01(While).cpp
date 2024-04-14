#include <iostream>
using namespace std;

int main()
{
    string nombre;
    string apellido;
    int num_veces = 1; //contador que inicia en 1

    cout << "Introduce tu nombre: "; //solicitar al usuario que introduzca su nombre
    cin >> nombre;

    cout << "Introduce tu apellido: "; // solicitar al usuario que introduzca su apellido
    cin >> apellido;

    while (num_veces <= 10) //bucle while que se ejecuta mientras el numero sea menor o igual a 10
    {
        cout << "Hola " << nombre << " " << apellido << endl; //mensaje de salida con el nombre y apellido
        num_veces = num_veces + 1; // incrementacion del contador en 1 veces
    }
    return 0;
}