import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;

public class sumOfOdd {
    public static int sumOdd(int a ){
        int sum=0;
        for(int i=0;i<=a;i++){
            if (i%2!=0) {
                sum = sum + i;
            }
        }
        return sum;
    }
    public static void main(String[] args) throws IOException{
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        System.out.print("Enter the number : ");
        int a = Integer.parseInt(br.readLine());
        System.out.print("Sum : ");
        System.out.println(sumOdd(a));
    }
    
}
