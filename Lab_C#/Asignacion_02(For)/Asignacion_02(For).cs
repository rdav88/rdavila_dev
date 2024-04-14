using System;

class Program
{
    static void Main(string[] args)
    {
        int meses;
        int temperatura;
        int total_temp = 0;
        int promedio_temp;

        for (meses = 1; meses <= 12; meses ++)
        {   
            Console.Write("Para el mes " + meses + ", ");
            Console.Write("ingrese la temperatura: ");
            temperatura = int.Parse(Console.ReadLine());

            total_temp = total_temp + temperatura;
        }

        promedio_temp = total_temp / 12;

        Console.WriteLine("El promedio de la temperatura de los meses fue de: " + promedio_temp );
    }
}