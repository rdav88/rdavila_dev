#include <iostream>
using namespace std;

int main()
{
    double distancia;
    double velocidad;
    double tiempo;

    //captura de datos 
    cout << "Ingrese la velocidad en millas por hora en la que se recorrio el viaje: ";
    cin >> velocidad;

    cout << "Ingrese el tiempo en horas en la que se tardo en recorrer el viaje: ";
    cin >> tiempo;

    //proceso matematico que determinara la distancia recorrida
    distancia = velocidad * tiempo;

    cout <<"La distancia recorrida del viaje es de: " << distancia << endl;

    return 0;

}