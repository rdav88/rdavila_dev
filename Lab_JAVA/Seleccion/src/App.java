import java.util.Scanner;

class Seleccion
{
    public static void main(String[] args)
    {
        Scanner scanner = new Scanner(System.in);
        System.out.print ("Introduce un numero: ");
        int numero = scanner.nextInt();

        if (numero > 0)
        {
            System.out.println("El numero es positivo.");
        }
    }
}