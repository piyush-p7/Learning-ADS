import java.util.*;
public class fibonacciNumber{
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        System.out.print("Enter - ");
        int a = sc.nextInt();
        int first = 0;
        int sec = 1;
        int c;
        sc.close();
        for(int i=1;i<a;i++){
            c = first+sec;
            first = sec;
            sec = c;
        }
        System.out.println(sec);
    }
}
