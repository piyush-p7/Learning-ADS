import java.util.Scanner;
public class pattern6 {
    // OUTPUT
    // enter - 4
    // 1
    // 1 2
    // 1 2 3
    // 1 2 3 4 
    public static void main(String[] args) {
        Scanner sc =new Scanner(System.in);
        System.out.print("enter - "); int a = sc.nextInt();sc.close();
        
        for(int i=1;i<=a;i++){
            for(int j=1;j<=i;j++){
                System.out.print(j+" ");
            }
            System.out.println();
        }
    }   
}
