import java.io.*;
public class pattern28 {
    // Enter - 4
    // A
    // BC
    // CDE
    // DEFG
    public static void main(String[] args) throws IOException{
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        System.out.print("Enter - ");
        int a = Integer.parseInt(br.readLine());
        for(int i=1;i<=a;i++){
            char x = (char)('A'+i-1);
            for(int j=1;j<=i;j++){
                System.out.print(x);
                x = (char)(x+1);
            }
            System.out.println();
        }
    }
}
