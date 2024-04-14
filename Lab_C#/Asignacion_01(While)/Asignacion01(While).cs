using System;

class Program
{
    static void Main(string[] args)
    { 
        string nombre;
        string apellido;
        int num_veces = 1; //contador que inicia en 1

        Console.Write("Introduce tu nombre: "); //solicitar al usuario que introduzca su nombre
        nombre = Console.ReadLine();

        Console.Write("Introduce tu apellido: "); //solicitar al usuario que introduzca su apellido
        apellido = Console.ReadLine();

        while (num_veces <= 10) //bucle while que se ejecuta mientras el numero sea menor o igual a 10
        {
            Console.WriteLine("Hola " + nombre + " " + apellido); //mensaje de salida con el nombre y apellido
            num_veces++; // incrementacion del contador en 1 veces
        }

    }
}