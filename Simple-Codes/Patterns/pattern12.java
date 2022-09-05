import java.util.Scanner;
    // OUTPUT
    //      *****
    //     *   *
    //    *   * 
    //   *   *
    //  *****
public class pattern12 {
    public static void main(String[] args) {
        Scanner sc =  new Scanner(System.in);
        int a = 5;
        sc.close();
        for(int i=1;i<=a;i++){
            for(int j=1;j<=a-i;j++){
                System.out.print(" ");
            }
            if (i==1 || i==a) {
                for(int j=1;j<=a;j++){
                    System.out.print("*");
                }    
            } else {
                System.out.print("*   *");
            }System.out.println();
            }
            
        }
    }


