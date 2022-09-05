import java.util.Scanner;

public class Butterfly {
    // OUTPUT
    // Enter - 4
    // *             *      6 spaces
    // * *         * *      4 spaces
    // * * *     * * *      2 spaces
    // * * * * * * * *    - n = 4 upto this (NOTE)
    // * * * * * * * *
    // * * *     * * *
    // * *         * * 
    // *             *
    public static void main(String[] args) {
    Scanner sc =  new Scanner(System.in);
    System.out.print("Enter - ");
    int a = sc.nextInt();
    sc.close();

    for(int i=1;i<=a;i++){
        for(int j=1;j<=i;j++){
            System.out.print("* ");
        }
        for(int j=1;j<=2*(a-i);j++){     // 2*(a-i) == agar i=>1 and a=>4, 
            System.out.print("  ");      // then spaces => (4-1)*2 => 6,, Likewise for all values of i.
        }
        for(int j=1;j<=i;j++){
            System.out.print("* ");
        }System.out.println();
    }
    for(int i=a;i>=1;i--){
        for(int j=1;j<=i;j++){
            System.out.print("* ");
        }
        for(int j=1;j<=2*(a-i);j++){     // 2*(a-i) == agar i=>1 and a=>4, 
            System.out.print("  ");      // then spaces => (4-1)*2 => 6,, Likewise for all values of i.
        }
        for(int j=1;j<=i;j++){
            System.out.print("* ");
        }System.out.println();
    }
    }
}