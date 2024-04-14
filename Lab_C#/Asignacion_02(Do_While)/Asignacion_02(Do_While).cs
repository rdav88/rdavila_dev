using System;

class Program
{
    static void Main(string[] args)
    {
        int meses = 1;
        int temperatura;
        int total_temp = 0;
        int promedio_temp;

    do 
    {
        Console.Write ("Introduce el promedio del mes " + meses + ": ");
        temperatura = int.Parse (Console.ReadLine());
    
        total_temp = total_temp + temperatura;
        meses = meses + 1;
    }
    while (meses <= 12);

    promedio_temp = total_temp / 12;

    Console.Write ("El promedio anual de la temperatura es: " + promedio_temp + ": ");
    }
}