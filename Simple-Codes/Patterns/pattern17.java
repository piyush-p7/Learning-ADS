import java.io.*;
public class pattern17 {
    // Enter - 3
    // 123
    // 123
    // 123
    public static void main(String[] args) throws IOException {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        System.out.print("Enter - ");
        int a = Integer.parseInt(br.readLine());
        int i = 1;
        while(i<=a){
            int j=1;
            while(j<=a){
                System.out.print(j);
                j++;
            }
            System.out.print("\n");
            i++;
        }
        
    }
}
