import java.util.Scanner;

class Program
{
    public static void main(String[] arg)
    {   //variables para almacenar los meses, sus temperaturas, la suma total y el promedio
        int meses;
        int temperatura;
        int total_temp = 0;
        int promedio_temp;

        Scanner scanner = new Scanner (System.in);

        for (meses = 1; meses <= 12; meses++) //ciclo for para iterar sobre los 12 meses del año
        {
            System.out.print ("Para el mes " + meses + ", ");
            System.out.print ("ingrese la temperatura: "); //solicitar al usuario que introduzca la temperatura
            temperatura = scanner.nextInt();

            total_temp = total_temp + temperatura; //almacenamiento de temperaturas previamente registradas

        }
        promedio_temp = total_temp /12; //promedio de temperaturas dividiendo las sumas entre los meses
        System.out.print ("El promedio de temperatura de los meses fue de " + promedio_temp);
    }
}