#include <iostream>
using namespace std;

int main()
{
    string membresia;
    float compras;

    cout << "¿Es usted miembro VIP de la tienda? (Y para si, N para no): "; //ingreso de datos del usuario
    cin >> membresia; //almacenamiento de datos a variable "membresia"

    cout << "Ingrese el monto total realizado en compras: $";
    cin >> compras;

    if (membresia == "Y" || compras >= 150) //condicion que al cumplirse una de las dos, otorga un descuento
    {
        cout << "Usted ha obtenido un descuento."; //mensaje al usuario si cumple con una de las condiciones
    }
    else 
    {
        cout << "Usted no es elegible para un descuento."; //mensaje al usuario si no cumple con ninguna de las condiciones
    }
    return 0;
}