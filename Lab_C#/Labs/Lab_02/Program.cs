using System;

class Program
{
    static void Main(string[] args)
    {
        
        double distancia, velocidad, promedio;

        Console.Write("Introduzca la distancia recorrida en km/h: ");
        distancia = Convert.ToDouble(Console.ReadLine());
        
        Console.Write("Introduzca la velocidad recorrida en horas: ");
        velocidad = Convert.ToDouble(Console.ReadLine());

        promedio = distancia * velocidad;

        Console.WriteLine("El distancia total recorrida en el viaje es de " + promedio + " Kilometros");
        
    }
}