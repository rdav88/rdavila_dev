#include <iostream>
using namespace std;

int main()
{   //variables para almacenar los meses, sus temperaturas, la suma total y el promedio
    int meses = 1;
    int temperatura;
    int total_temp = 0;
    int promedio_temp;


    while (meses <= 12) //bucle While que repite mientras meses sea menor o igual a 12
    {
        cout << "Introduce la temperatura promedio del mes " << meses << ": "; //solicitar al usuario que introduzca la temperatura
        cin >> temperatura;
    
        total_temp = total_temp + temperatura; //almacenamiento de temperaturas previamente registradas
        meses = meses + 1; //incrementa el numero de meses en 1 hasta alcanzar el mes 12
    }
    
    promedio_temp = total_temp / 12; //promedio de temperaturas dividiendo las sumas entre los meses

    cout << "El promedio anual de temperatura es: " << promedio_temp << endl;

    return 0;
}