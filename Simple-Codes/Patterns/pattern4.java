import java.util.Scanner;
public class pattern4 {
    public static void main(String[] args) {
    Scanner sc = new Scanner(System.in);
    System.out.print("Enter - ");
    int a = sc.nextInt();
    //Enter - 4
    //      *
    //    * *
    //  * * *
    //* * * *

    for(int i=1;i<=a;i++){
        for(int j=1;j<=a-i;j++){
            // cell => (i,j)
            System.out.print(" ");
        }
        for(int j=1;j<=i;j++){
            System.out.print("*");
        }
        System.out.println();
    }sc.close();
  }
}
