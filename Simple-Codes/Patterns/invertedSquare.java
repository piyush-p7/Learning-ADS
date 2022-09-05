import java.util.Scanner;
public class invertedSquare {
  // OUTPUT
  // Enter - 8
  //      *
  //    * * *
  //  * * * * *
  //* * * * * * *
  //  * * * * *
  //    * * *
  //      *
    public static void main(String[] args) {
    Scanner sc = new Scanner(System.in);
    System.out.print("Enter - ");
    int b = sc.nextInt();
    int a = b/2;
    sc.close();

    for(int i=1;i<=a;i++){
        for(int j=1;j<=a-i;j++){
            System.out.print("  ");

        }
        for(int j=1;j<=2*i-1;j++){
            System.out.print("* ");
        }System.out.println();
    }
    a--;
    for(int i=a;i>=1;i--){
        System.out.print("  ");
        for(int j=1;j<=a-i;j++){
            System.out.print("  ");

        }
        for(int j=1;j<=2*i-1;j++){
            System.out.print("* ");
        }System.out.println();
    }
 }
}
