import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;

public class circle2PieR {
    final static double PIE = 3.14;
    public static double circumference(int a){
        return  2*PIE*a;
    }
    public static void main(String[] args) throws IOException{
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        System.out.print("Enter the R : ");
        int R = Integer.parseInt(br.readLine());
        System.out.println(circumference(R));
        
    }
    
}
