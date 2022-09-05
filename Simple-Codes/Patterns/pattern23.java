import java.io.*;

public class pattern23 {
    // Enter - 4
    // 1
    // 21
    // 321
    // 4321
    public static void main(String[] args) throws IOException{
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        System.out.print("Enter - ");
        int a = Integer.parseInt(br.readLine());
        for(int i=1;i<=a;i++){
            for(int j=i;j>=1;j--){
                System.out.print(j);
            }
            System.out.println();
        }
    }
}
