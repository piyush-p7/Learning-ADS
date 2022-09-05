import java.io.*;
public class pattern1{
    public static void main (String[] args) throws IOException{
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        System.out.print("Enter - ");
        int x = Integer.parseInt(br.readLine());
        System.out.print("From - ");
        int y = Integer.parseInt(br.readLine());
        System.out.print("Now, how much - ");
        int a = Integer.parseInt(br.readLine());
        for(int i=y;i<=a;i++){
            System.out.println(x+" x "+i+" = "+x*i );
        }
    }
}