#include <iostream>
using namespace std;

int main()
{   
    int num_empleados = 3; // numero de empleados
    float horas_trabajadas;
    float horas_trabajadas_overtime = 0;
    float pago_por_hora;
    float sueldo_bruto;
    float sueldo_neto;
    float total_pago = 0;
    float total_overtime = 0;
    float overtime_horas = 0;
    float total_pago_empleados = 0;
    float total_nomina = 0;

    cout << "---------------------------------------------------------------------------------" << endl;
    for (int i = 1; i <= num_empleados; i++)
    {
        cout << "Para el empleado: " << i << endl;
        cout << "Ingresa las horas trabajadas: ";
        cin >> horas_trabajadas; // Almacenamiento de horas trabajadas

        cout << "Ingresa el pago por hora: $";
        cin >> pago_por_hora;

        if (horas_trabajadas > 40)
        {   // Calcula las horas de overtime si el empleado trabajo mas de 40 horas
            overtime_horas = horas_trabajadas - 40;
            horas_trabajadas_overtime = horas_trabajadas_overtime + overtime_horas;
            // Calcula el pago de las horas de overtime, que es el doble del pago normal por hora
            total_overtime = overtime_horas * (pago_por_hora * 2);
            // Ajusta las horas trabajadas del empleado restando las horas de overtime
            horas_trabajadas = horas_trabajadas - overtime_horas;
        }

        // Calcula el sueldo bruto sumando el pago por hora y las horas trabajadas, mas el pago de overtime si aplica
        sueldo_bruto = pago_por_hora * horas_trabajadas + total_overtime;
        // Calcula el sueldo neto despues de aplicar un descuento del 7%
        sueldo_neto = sueldo_bruto - (sueldo_bruto * 0.07);

        cout << "El sueldo bruto del empleado es de: $" << sueldo_bruto << endl;
        cout << "El sueldo neto del empleado es de: $" << sueldo_neto << endl;

        total_pago = sueldo_neto + total_overtime;

        cout << "Sueldo con descuentos/overtime (si aplica) es de: $" << total_pago << endl;
        cout << "---------------------------------------------------------------------------------" << endl;

        // Suma el sueldo bruto del empleado al total de pago de todos los empleados
        total_pago_empleados = total_pago_empleados + sueldo_bruto;
        // Suma el sueldo neto más el pago de overtime al total de pago con overtime de todos los empleados
        total_nomina = total_nomina + sueldo_neto + total_overtime;
        
        // Reinicia el total de overtime para el proximo empleado al empezar el ciclo
        total_overtime = 0;
    }

    cout << "Para este periodo:" << endl;
    cout << "El total en nomina de los empleados (Sueldo Bruto) fue de: $" << total_pago_empleados << endl;
    cout << "El total en nomina de los empleados despues de descuentos y overtime (si aplica) fue de: $" << total_nomina << endl;
    cout << "El total de horas trabajadas de overtime de los empleados fue de: " << horas_trabajadas_overtime << endl;
    cout << "---------------------------------------------------------------------------------" << endl;

    return 0;
}