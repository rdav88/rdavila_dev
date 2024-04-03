#include <iostream>
using namespace std;

int main()
{
    string membresia;
    int num_entradas;

    cout << "¿Es usted miembro del teatro? (si/no): ";
    cin >> membresia;

    cout << "¿Que cantidad de entradas compro?: ";
    cin >> num_entradas;

    if (membresia == "si")
    {
        if (num_entradas > 5)
        {
            cout << "Usted es elegible para un descuento de 15%.";
        }
        else 
        {
            cout << "Usted es elegible para un descuento de 10%.";
        }
    }
    else 
    {
        if (num_entradas > 10)
        {
            cout << "Usted es elegible para un descuento de 5%.";
        }
        else
        {
            cout << "Usted no es elegible para el descuento.";
        }
    }
    
    return 0;

}

