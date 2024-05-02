#include <iostream>
using namespace std;

int main()
{
    int n; //Variable que almacena la cantidad de elementos en el arreglo
    int suma = 0; //Variable para almacenar la suma de los elementos del arreglo

    cout << "Ingrese la cantidad de elementos para el arreglo: ";
    cin >> n;
    
    int arreglo[n]; //Arreglo de tamaño "n"

    for (int i = 0; i < n; i++) //Ciclo for que solicita al usuario el ingreso de elementos al arreglo
    {
        cout << "Para el elemento " << i + 1 << ", ingrese un numero: ";
        cin >> arreglo[i];
    }
    for (int i = 0; i < n; i++) //Ciclo que suma los elementos del arreglo
    {
        suma = suma + arreglo[i];
    }
    
    cout << "La suma de los elementos del arreglo es de: " << suma << endl;
    
    return 0;
}