import java.util.Scanner;
public class pattern13 {
    public static void main(String[] args) {
    Scanner sc = new Scanner(System.in);
    System.out.print("Enter - ");
    int a = sc.nextInt();
    // OUTPUT
    // Enter - 5
    //     1 
    //    2 2
    //   3 3 3
    //  4 4 4 4
    // 5 5 5 5 5

    for(int i=1;i<=a;i++){
        for(int j=1;j<=a-i;j++){
            // cell => (i,j)
            System.out.print(" ");
        }
        for(int j=1;j<=i;j++){
            System.out.print(i+" ");
        }
        System.out.println();}
    
    sc.close();
    }
}
