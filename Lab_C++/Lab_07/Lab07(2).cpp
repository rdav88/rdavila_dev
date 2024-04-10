#include <iostream>
using namespace std;

int main ()
{   // variables de tipo entero y cadena
    int numeroEstudiante;
    int sumaCalificacion = 0;
    int calificacionEstudiante;
    int promedio;
    string nombreEstudiante;

    for(numeroEstudiante = 1; numeroEstudiante <= 10; numeroEstudiante ++) //ciclo For para incrementar el numero de estudiantes hasta 10
    {
        cout << "Estudiante #" << numeroEstudiante << ": "; 
        cout << "Ingrese el nombre del estudiante: "; //ingreso de datos del usuario
        cin >> nombreEstudiante; //captura de datos a la variable "nombreEstudiante"
    
        cout <<"Ingrese la puntuacion de " << nombreEstudiante << ": ";
        cin >> calificacionEstudiante;
    
        sumaCalificacion = sumaCalificacion + calificacionEstudiante; //proceso matematico que suma las calificaciones de los estudiantes
    }  
        promedio = sumaCalificacion / numeroEstudiante; //proceso matematico que calcula el promedio de los estudiantes
        cout << "El promedio general de las calificaciones del grupo es: " << promedio << endl; //mensaje de salida con el promedio de los estudiantes

    return 0;
}