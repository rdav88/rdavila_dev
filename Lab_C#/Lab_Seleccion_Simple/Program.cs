using System;

class Program
{
        static void Main(string [] args)
        {
            int antiguedad; //variable de tipo entero

            Console.Write("Introduce la antiguedad del empleado en años: ");
            antiguedad = int.Parse(Console.ReadLine()); //captura de dato ingresado por el usuario en linea 9

            if (antiguedad >=  5) //condicion que determina la antiguedad del empleado
            {
                Console.WriteLine("El empleado es elegible para recibir el bono de $1,000.");
            }
            if (antiguedad < 5)
            {   
                Console.WriteLine("El empleado no es elegible para recibir el bono de $1,000.");
            }
        }
    
}