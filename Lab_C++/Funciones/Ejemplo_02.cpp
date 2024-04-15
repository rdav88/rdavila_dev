#include <iostream>
using namespace std;


//definicion de la funcion Saludar que recibe un parametro de tipo string
void Saludar(string nombre)
{
    cout << "Hola " << nombre << "!" << endl;
}

int main()
{   
    //llamada a la funcion Saludar con el argumento "Juan"
    Saludar("Juan");

    return 0;
}