#include <iostream>
using namespace std;

int main()
{
    int meses;
    int temperatura;
    int total_temp = 0;
    int promedio_temp;

    for (meses = 1; meses <= 12; meses++)
    {
        cout << "Para el mes " << meses << ", ";
        cout << "ingrese la temperatura: ";
        cin >> temperatura;
        
        total_temp = total_temp + temperatura;
    }
        promedio_temp = total_temp / 12;
        cout << "El promedio de temperatura de los meses fue de: " << promedio_temp << endl;

    return 0;
}
