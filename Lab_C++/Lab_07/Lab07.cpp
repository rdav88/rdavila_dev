#include <iostream>
using namespace std;

int main ()
{
    int estudiante = 1;
    int calificacionFinal;
    int sumaCalificacion = 0;
    int promedio;
    string nombreEstudiante;

    for(estudiante; estudiante <= 10; estudiante ++)
    {
        cout << "Estudiante #" << estudiante << ":" << endl;
        cout << "Ingrese el nombre del estudiante: ";
        cin >> nombreEstudiante;
    }
    
    return 0;
}