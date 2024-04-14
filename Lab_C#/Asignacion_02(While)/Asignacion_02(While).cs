using System;

class Program
{
    static void Main(string[] args)
    {
        int meses = 1;
        int temperatura;
        int total_temp = 0;
        int promedio_temp;

        while (meses <= 12)
        {
            Console.Write("Ingresa la temperatura del mes " + meses + ": ");
            temperatura = int.Parse(Console.ReadLine());

            total_temp = total_temp + temperatura;
            meses = meses + 1;
        }
        promedio_temp = total_temp / 12;

        Console.WriteLine("El promedio anual de la temperatura es: " + promedio_temp);
    }
}