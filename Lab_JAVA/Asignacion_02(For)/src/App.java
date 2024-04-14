import java.util.Scanner;

class Main
{
    public static void main(String[] arg)
    {
        int meses;
        int temperatura;
        int total_temp = 0;
        int promedio_temp;

        Scanner scanner = new Scanner (System.in);

        for (meses = 1; meses <= 12; meses++)
        {
            System.out.print ("Para el mes " + meses + ", ");
            System.out.print ("ingrese la temperatura: ");
            temperatura = scanner.nextInt();

            total_temp = total_temp + temperatura;

        }
        promedio_temp = total_temp /12;
        System.out.print ("El promedio de temperatura de los meses fue de " + promedio_temp);
    }
}