import java.util.Scanner;

class Main
{
    public static void main(String [] args)
    {
        int meses = 1;
        int temperatura;
        int total_temp = 0;
        int promedio_temp;

        Scanner scanner = new Scanner (System.in);

        do 
        {
        System.out.print("Introduce el promedio del mes " + meses + ": ");
        temperatura = scanner.nextInt();
    
        total_temp = total_temp + temperatura;
        meses = meses + 1;
        }
        while (meses <= 12);

        promedio_temp = total_temp / 12;

        System.out.print("El promedio anual de la temperatura es: " + promedio_temp + ": ");        
    }
}