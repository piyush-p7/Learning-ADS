import java.util.*;
public class farenheitCelsius {
    public static double farenheitToCelsius(Double farenhiet_S,Double farenhiet_E, Double size){
        double i = 0;
        while (i<=farenhiet_E) {
            System.out.println(farenhiet_S+i +" "+(((farenhiet_S+i)-32)*0.5556));
            i=i+size;
        }
        return 1;
    }

    public static void main(String[] args) {
        Scanner sc =  new Scanner(System.in);
        double size = Integer.parseInt(sc.nextLine());
        double farenhiet_S = Integer.parseInt(sc.nextLine());
        double farenhiet_E = Integer.parseInt(sc.nextLine());
        farenheitToCelsius(farenhiet_S,farenhiet_E,size);
        sc.close();
    }
}
