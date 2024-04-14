#include <iostream>
using namespace std;

int main()
{  
    string nombre;
    string apellido;
    int num_veces;
    
    cout << "Introduce tu nombre: "; //solicitar al usuario que introduzca su nombre
    cin >> nombre;

    cout << "Introduce tu apellido: "; // solicitar al usuario que introduzca su apellido
    cin >> apellido;

    for (num_veces = 1; num_veces <= 10; num_veces++) //bucle for que se repetira 10 veces
    {
        cout << "Hola " << nombre << " " << apellido << endl; //mensaje de salida con el nombre y apellido
    }

    return 0;
}