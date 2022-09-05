import java.io.*;
public class greastestCommonDivisor {
    static int gcd(int a, int b)
    {
        // Everything divides 0
        if (a == 0)
          return b;
        if (b == 0)
          return a;
      
        // base case
        if (a == b)
            return a;
      
        // a is greater
        if (a > b)
            return gcd(a-b, b);
        return gcd(a, b-a);
    }
    public static void main(String[] args) throws IOException {
        BufferedReader bf = new BufferedReader(new InputStreamReader(System.in));
        System.out.print("a : ");
        int a = Integer.parseInt(bf.readLine());
        System.out.print("b : ");
        int b = Integer.parseInt(bf.readLine());
        System.out.print("GCD : ");
        System.out.println(gcd(a,b));
    }
    
}
