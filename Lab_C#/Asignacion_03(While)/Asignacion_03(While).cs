using System;

class Program
{
    static void Main(string[] args)
    {
        int num_empleados = 3; // número de empleados
        int contador = 0;

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

        Console.WriteLine("---------------------------------------------------------------------------------");
        while (contador < num_empleados)
        {
            contador++;
            Console.WriteLine("Para el empleado: " + contador);
            Console.Write("Ingresa las horas trabajadas: ");
            horas_trabajadas = float.Parse(Console.ReadLine()); // Almacenamiento de horas trabajadas

            Console.Write("Ingresa el pago por hora: $");
            pago_por_hora = float.Parse(Console.ReadLine());

            if (horas_trabajadas > 40)
            {   // Calcula las horas de overtime si el empleado trabajó más de 40 horas
                overtime_horas = horas_trabajadas - 40;
                horas_trabajadas_overtime += overtime_horas;
                // Calcula el pago de las horas de overtime, que es el doble del pago normal por hora
                total_overtime = overtime_horas * (pago_por_hora * 2);
                // Ajusta las horas trabajadas del empleado restando las horas de overtime
                horas_trabajadas -= overtime_horas;
            }

            // Calcula el sueldo bruto sumando el pago por hora y las horas trabajadas, más el pago de overtime si aplica
            sueldo_bruto = pago_por_hora * horas_trabajadas + total_overtime;
            // Calcula el sueldo neto después de aplicar un descuento del 7%
            sueldo_neto = sueldo_bruto - (sueldo_bruto * 0.07);

            Console.WriteLine("El sueldo bruto del empleado es de: $" + sueldo_bruto);
            Console.WriteLine("El sueldo neto del empleado es de: $" + sueldo_neto);

            total_pago = sueldo_neto + total_overtime;

            Console.WriteLine("Sueldo con descuentos/overtime (si aplica) es de: $" + total_pago);
            Console.WriteLine("---------------------------------------------------------------------------------");

            // Suma el sueldo bruto del empleado al total de pago de todos los empleados
            total_pago_empleados += sueldo_bruto;
            // Suma el sueldo neto más el pago de overtime al total de pago con overtime de todos los empleados
            total_nomina += sueldo_neto + total_overtime;

            // Reinicia el total de overtime para el próximo empleado al empezar el ciclo
            total_overtime = 0;
        }

        Console.WriteLine("Para este periodo:");
        Console.WriteLine("El total en nomina de los empleados (Sueldo Bruto) fue de: $" + total_pago_empleados);
        Console.WriteLine("El total en nomina de los empleados despues de descuentos y overtime (si aplica) fue de: $" + total_nomina);
        Console.WriteLine("El total de horas trabajadas de overtime de los empleados fue de: " + horas_trabajadas_overtime);
        Console.WriteLine("---------------------------------------------------------------------------------");
    }
}