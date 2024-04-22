using System;

class Program
{
    static void Main(string[] args)
    {   //variables para almacenar los meses, sus temperaturas, la suma total y el promedio
        int meses = 1;
        int temperatura;
        int total_temp = 0;
        int promedio_temp;

    do 
    {
        Console.Write ("Ingresar la temperatura del mes " + meses + ": "); //solicitar al usuario que introduzca la temperatura
        temperatura = int.Parse (Console.ReadLine());
    
        total_temp = total_temp + temperatura; //almacenamiento de temperaturas previamente registradas
        meses = meses + 1; //incrementa el numero de meses en 1 hasta alcanzar el mes 12
    }
    while (meses <= 12); //bucle While que repite mientras meses sea menor o igual a 12

    promedio_temp = total_temp / 12; //promedio de temperaturas dividiendo las sumas entre los meses

    Console.Write ("El promedio anual de la temperatura es: " + promedio_temp + ": ");
    }
}