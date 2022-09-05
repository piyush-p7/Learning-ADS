import java.util.*;

public class numberStar {
    public static void numStar(int n){
        for(int i=n;i>=1;i--){
            for(int j=1;j<=n;j++){
                if(j<=i){
                    System.out.print(j);
                }
                else{
                    System.out.print("*");
                }
            }
            for(int p=n;p>=1;p--){
                if(p<=i){
                    System.out.print(p);
                }
                else{
                    System.out.print("*");
                }
            }
            System.out.println();
        }
    }
    // ​12344321                              
    // 123**321                              
    // 12****21                              
    // 1******1
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        System.out.print("Enter - ");
        int n = sc.nextInt();
        sc.close();
        numStar(n);
        
    }
}
