#include <iostream>
using namespace std;

int main()
{   //variables para almacenar los meses, sus temperaturas, la suma total y el promedio
    int meses;
    int temperatura;
    int total_temp = 0;
    int promedio_temp;

    for (meses = 1; meses <= 12; meses++) //ciclo for para iterar sobre los 12 meses del año
    {   
        cout << "Para el mes " << meses << ", ";
        cout << "ingrese la temperatura: "; //solicitar al usuario que introduzca la temperatura
        cin >> temperatura;
        
        total_temp = total_temp + temperatura; //almacenamiento de temperaturas previamente registradas
    }
        promedio_temp = total_temp / 12; //promedio de temperaturas dividiendo las sumas entre los meses
        cout << "El promedio de temperatura de los meses fue de: " << promedio_temp << endl;

    return 0;
}
