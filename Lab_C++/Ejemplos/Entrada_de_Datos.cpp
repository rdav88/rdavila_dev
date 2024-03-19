#include <iostream>
#include <string>

using namespace std;

    int main () 
    {
        int entero;
        float flotante;
        char caracter;
        string cadena;

        cout << "Ingrese un número entero: ";
        cin >> entero;

        cout << "Ingrese un nûmero flotante: ";
        cin >> flotante;

        cout << "Ingrese un carácter: ";
        cin >> caracter;

        cout << "Ingrese una cadena de caracteres: ";
        cin.ignore(); // ignorar el '\n' dejado por // cin >> caracter

    getline(cin,cadena); // lee una linea de texto desde la //entrada  estándar (cin) y la almacena en la variable *cadena*
    return 0;

}