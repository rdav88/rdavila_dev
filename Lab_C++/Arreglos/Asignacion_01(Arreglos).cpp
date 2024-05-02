#include <iostream>
using namespace std;

int main()
{
    int numero[5] = {1,2,3,4,5};
    int suma = 0;

    cout << "Elementos del arreglo" << endl;
    
    for (int i = 0; i < 5; i++)
    {
        cout << "Elemento " << i + 1 << ": " << numero[i] << endl;
    }

    for (int i = 0; i < 5; i++)
    {
        suma = suma + numero[i];
    }
    
    cout << "La suma de los elementos del arreglo es de: " << suma << endl;

    return 0;
}