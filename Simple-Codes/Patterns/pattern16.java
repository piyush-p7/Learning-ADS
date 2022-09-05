import java.util.*;
public class pattern16{
    // OUTPUT
    // Enter - 4
    // 1 1 1 1
    // 2 2 2 2
    // 3 3 3 3
    // 4 4 4 4
    public static void main(String args[]){
        Scanner sc = new Scanner(System.in);
        System.out.print("Enter - ");
        int a = sc.nextInt();
        sc.close();
        int i = 1;
        while(i<=a) {
            int j = 1;
            while(j<=a){
                System.out.print(i);
                j++;
            }
            System.out.print("\n");
            i=i+1;
        }
    }
}