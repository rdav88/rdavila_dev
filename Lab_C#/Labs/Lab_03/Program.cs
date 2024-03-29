using System;

class Program
{
    static void Main(string[] args)
    {
        string tarjeta; //varibale tipo cadena.

        Console.Write ("Introduzca el estado de la tarjeta de la biblioteca (activa/inactiva): ");
        tarjeta = Console.ReadLine(); //captura de datos ingresados por usuario en linea 9.

        if (tarjeta == "activa") //condicion que verifica si prestamos seran aceptados.
        {
            Console.WriteLine ("Prestamos de la biblioteca aceptados.");
        }
        else if (tarjeta == "inactiva") // condicion que de cumplirse, no aceptara prestamos de la biblioteca.
        {
            Console.WriteLine ("Prestamos de la biblioteca no aceptados.");
        }
    }
}