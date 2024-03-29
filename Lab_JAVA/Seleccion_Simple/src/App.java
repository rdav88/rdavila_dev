import java.util.Scanner;

class Main
{
    public static void main(String[] arg)
    {   

        Scanner scanner = new Scanner (System.in);
        // captura de datos ingresado por el usuario
        System.out.print ("Cual es el estado de la tarjeta de la biblioteca? activa/inactiva: ");
        
        String tarjeta = scanner.nextLine();

        if ("activa".equals(tarjeta)) //.equals() para comparar cadenas
        {
            System.out.println("Puede realizar prestamos en la biblioteca.");
            // condicion que se cumple si el estado de la tarjeta es activa
        } 
        if ("inactiva".equals(tarjeta))
        {   // mensaje que se anuncia si el estado de la tarjeta no es activa
            System.out.println("No puede realizar prestamos en la biblioteca.");
        }
    }
}