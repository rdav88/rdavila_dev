using System;

class Program
{
    static void Main (string[] args)
    {
        Console.Write("Introduce un numero: ");
        int numero = int.Parse(Console.ReadLine());
        
        if (numero >0)
        {
        Console.WriteLine("El numero es positivo");
        }
    }
}
