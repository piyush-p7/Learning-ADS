import java.util.Scanner;

public class pattern5 {
    // * * * *
    // * * *
    // * *
    // * 
    
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        System.out.print("Enter rows - ");
        int a = sc.nextInt();
        sc.close();
        for(int i=a;i>=1;i--){
            for(int j=1;j<=i;j++){
                System.out.print("* ");
            }
            System.out.println();
        }
    }
}
