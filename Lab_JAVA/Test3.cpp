#include <iostream>
using namespace std;


int numero();


int a;
int b;
int suma = 0;


int main()
{
    cout << "Introduce el valor de a: ";
    cin >> a;
    cout << "Introduce el valor de b: ";
    cin >> b;

    suma = a + b;

    cout << "La suma de ambos valores es: " << numero() << endl;
    return 0;
}


int numero()
{
    return suma;
}