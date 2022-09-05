import java.util.Scanner;
public class pattern9 {
    // Output
    // Enter - 5
    // 1
    // 0 1
    // 1 0 1
    // 0 1 0 1
    // 1 0 1 0 1
    public static void main(String[] args) {
        Scanner sc =  new Scanner(System.in);
        System.out.print("Enter - ");
        int a = sc.nextInt();
        sc.close();
        for(int i=1;i<=a;i++){
            for(int j=1;j<=i;j++){
                if((i+j)%2==0){
                    System.out.print("1 ");
                }
                else{
                    System.out.print("0 ");
                }
            }System.out.println();
        }

    }
    
}
