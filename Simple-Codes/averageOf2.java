import java.io.*;

public class averageOf2 {
    public  static void average(int a, int b){
        System.out.print("Average : "+(a+b)/2);
    }
    public static void main(String[] args) throws IOException {
        BufferedReader bf = new BufferedReader(new InputStreamReader(System.in));
        System.out.print("a : ");
        int a = Integer.parseInt(bf.readLine());
        System.out.print("b : ");
        int b = Integer.parseInt(bf.readLine());
        average(a,b);
    }
}
