import java.util.Scanner;
    // OUTPUT
    // Enter - 5
    //     * * * * *
    //    * * * * *
    //   * * * * *
    //  * * * * *
    // * * * * *
public class pattern11 {
    public static void main(String[] args) {
        Scanner sc =  new Scanner(System.in);
        System.out.print("Enter - ");
        int a = sc.nextInt();
        sc.close();
        for(int i=1;i<=a;i++){
            for(int j=1;j<=a-i;j++){
                System.out.print("  ");
            }
            for(int j=1;j<=a;j++){
                System.out.print("* ");
            }System.out.println();
        }
    }
}

