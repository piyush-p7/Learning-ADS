import java.io.*;
public class greaterNumber {
    public static int greater(int a, int b){
        if (a>b) {
            return a;
        } else {
            return b;
        }
    }
    public static void main(String[] args) throws IOException {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        System.out.print("Enter A : ");
        int A = Integer.parseInt(br.readLine());
        System.out.print("Enter B : ");
        int B = Integer.parseInt(br.readLine());
        System.out.print("Greater no is : ");
        System.out.print(greater(A,B));
    }
}
