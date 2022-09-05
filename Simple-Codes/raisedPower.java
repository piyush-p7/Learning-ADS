import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;

public class raisedPower {
    public static double power(int a, int n){
        return Math.pow(a, n);        
    }
    public static void main(String[] args) throws IOException{
        int result = 1;
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        System.out.print("Enter the number A : ");
        int A = Integer.parseInt(br.readLine());
        System.out.print("Enter the number B : ");
        int B = Integer.parseInt(br.readLine());
        System.out.print("The answer is : ");
        System.out.print("\nUsing (Math.pow) : "+power(A,B));
        for(int i=1;i<=B;i++){
            result*=A;
        }
        System.out.println("\nFor loop : "+result);
    }
    
}
