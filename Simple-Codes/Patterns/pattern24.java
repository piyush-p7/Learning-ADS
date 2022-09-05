import java.util.*;
public class pattern24 {
    // Enter - 4
    // 1 
    // 2 2
    // 3 3 3
    // 4 4 4 4
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        System.out.print("Enter - ");
        int a = sc.nextInt();
        sc.close();
        for(int i=1;i<=a;i++){
            for(int j=1;j<=a;j++){
                char jth = (char)('A'+j-1);
                System.out.print(jth+" ");               
            }
            System.out.println();
        }
    }
}