import java.util.*;
public class pattern27 {
    // Enter - 4
    // ABCD
    // BCDE
    // CDEF
    // DEFG
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        System.out.print("Enter - ");
        int a = sc.nextInt();
        sc.close();
        for(int i=0;i<a;i++){
            char x = (char)('A'+i);
            for(int j=0;j<a;j++){
                System.out.print(x);
                x=(char)(x+1);
            }System.out.println();
        }
    }
}