#include <iostream>
using namespace std;

int main()
{
    int meses = 1;
    int temperatura;
    int total_temp = 0;
    int promedio_temp;


    while (meses <= 12)
    {
        cout << "Introduce el promedio del mes " << meses << ": ";
        cin >> temperatura;
    
        total_temp = total_temp + temperatura;
        meses = meses + 1;
    }
    
    promedio_temp = total_temp / 12;

    cout << "El promedio anual de temperatura es: " << promedio_temp << endl;

    return 0;
}