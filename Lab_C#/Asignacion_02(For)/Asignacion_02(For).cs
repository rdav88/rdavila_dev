using System;

class Program
{
    static void Main(string[] args)
    {   //variables para almacenar los meses, sus temperaturas, la suma total y el promedio
        int meses;
        int temperatura;
        int total_temp = 0;
        int promedio_temp;

        for (meses = 1; meses <= 12; meses ++) //ciclo for para iterar sobre los 12 meses del año
        {   
            Console.Write("Para el mes " + meses + ", ");
            Console.Write("ingrese la temperatura: "); //solicitar al usuario que introduzca la temperatura
            temperatura = int.Parse(Console.ReadLine());

            total_temp = total_temp + temperatura; //almacenamiento de temperaturas previamente registradas
        }

        promedio_temp = total_temp / 12; //promedio de temperaturas dividiendo las sumas entre los meses

        Console.WriteLine("El promedio de la temperatura de los meses fue de: " + promedio_temp );
    }
}