#include <iostream>
using namespace std;

int main()
{
    int instrumento; //variable tipo entero

    //
    cout <<"Bienvenido a la tienda musical! " << endl;
    cout <<"Ofrecemos una gran variedad de instrumentos y descuentos " << endl;
    cout <<"------------------------------" << endl;
    cout <<"1. Guitarra "<< endl;
    cout <<"2. Piano "<< endl;
    cout <<"3. Bateria "<< endl;
    cout <<"4. Violin "<< endl;
    cout <<"5. Flauta "<< endl;
    cout <<"------------------------------" << endl;
    cout <<"Ingrese el tipo de instrumento: "; //captura de dato del usuario

    cin >> instrumento;//almacenamiento de dato a variable "instrumento"

    switch (instrumento)
    {
        case 1://Guitarra
            cout <<"El descuento de las guitarras es de 10%" << endl;
            break;
        case 2://Piano
            cout <<"El descuento de los pianos es de 15%" << endl;
            break;
        case 3://Bateria
            cout <<"El descuento de las baterias es de 20%" << endl;
            break;
        case 4://Violin
            cout <<"El descuento de los violines es de 12%" << endl;
            break;
        case 5://Flauta
            cout <<"El descuento de las flautas es de 8%" << endl;
            break;

        default://En caso de que el usuario ingrese una opcion no valida
            cout <<"Instrumento no reconocido. Intente de nuevo." << endl;
    }
    return 0;
}