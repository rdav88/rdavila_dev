using System;

class Program
{
    static void Main(string[] args)
    {
        string nombre;
        string apellido;
        int num_veces;

        Console.Write("Introduce tu nombre: "); //solicitar al usuario que introduzca su nombre
        nombre = Console.ReadLine();

        Console.Write("Introduce tu apellido: "); // solicitar al usuario que introduzca su apellido
        apellido = Console.ReadLine();

        for (num_veces = 1; num_veces <= 10; num_veces++) //bucle for que se repetira 10 veces
        {
            Console.WriteLine("Hola " + nombre + " " + apellido); //mensaje de salida con el nombre y apellido
        }
    }

}