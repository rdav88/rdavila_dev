using System;

class Program
{
    static void Main(string[] args)
    {
        
        double exam1, exam2, exam3, exam4, promedio;
        
        Console.Write("Introduzca el puntaje del Examen 1: ");
        exam1 = Convert.ToDouble(Console.ReadLine());

        Console.Write("Introduzca el puntaje del Examen 2: ");
        exam2 = Convert.ToDouble(Console.ReadLine());

        Console.Write("Introduzca el puntaje del Examen 3: ");
        exam3 = Convert.ToDouble(Console.ReadLine());

        Console.Write("Introduzca el puntaje del Examen 4: ");
        exam4 = Convert.ToDouble(Console.ReadLine());

        promedio = (exam1 + exam2 + exam3 + exam4) / 4;

        Console.WriteLine("El promedio del estudiante es " + promedio);

    }
}