import java.util.*;
public class pattern22 {
    // Enter - 4
    // 1 
    // 2 2
    // 3 3 3
    // 4 4 4 4
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        System.out.print("Enter - ");
        int a = sc.nextInt();
        int p = 1;
        sc.close();
        for(int i=1;i<=a;i++){
            for(int j=1;j<=i;j++){
                System.out.print(p+" ");               
            }
            p++;
            System.out.println();
        }
    }
}