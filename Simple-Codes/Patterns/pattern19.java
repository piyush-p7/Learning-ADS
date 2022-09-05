import java.io.*;

public class pattern19 {
    // Enter - 4
    // 4444
    // 4444
    // 4444
    // 4444
    public static void main(String[] args) throws IOException{
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        System.out.print("Enter - ");
        int a = Integer.parseInt(br.readLine());
        for(int i=1;i<=a;i++){
            for(int j=1;j<=a;j++){
                System.out.print(a);
            }
            System.out.println("");

        }
    }
}
