import java.util.*;
public class pattern29 {
    // Enter - 4
    // D
    // CD
    // BCD
    // ABCD
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        System.out.print("Enter - ");
        int a = sc.nextInt();
        sc.close();
        for(int i=1;i<=a;i++){
            char x = (char)('A'+ a-i);
            for(int j=1;j<=i;j++){
                System.out.print(x);
                x = (char)(x+1);
            }System.out.println();
        }
    }
}
