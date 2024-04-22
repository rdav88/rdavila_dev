#include <iostream>
using namespace std;

int numero1 = 10;
int numero2 = 5;

int sumar();
int restar();

int main()
{
    cout << "Suma de los numeros: " << sumar() << endl;
    cout << "Resta de los numeros: " << restar() << endl;
    return 0;
}

int sumar()
{
    return numero1 + numero2;
}

int restar()
{
    return numero1 - numero2;
}