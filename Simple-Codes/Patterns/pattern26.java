import java.util.*;
public class pattern26 {
    // Enter - 4
    // A
    // BB
    // CCC
    // DDDD
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        System.out.print("Enter - ");
        int a = sc.nextInt();
        sc.close();
        char x = 'A';
        for(int i=1;i<=a;i++){
            for(int j=1;j<=i;j++){
                System.out.print(x);
            }
            x = (char)(x+1);
            System.out.println();
        }
    }
}
