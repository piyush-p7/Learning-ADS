import java.io.*;
public class pattern18 {
    // Enter - 5
    // 5 4 3 2 1 
    // 5 4 3 2 1
    // 5 4 3 2 1
    // 5 4 3 2 1
    // 5 4 3 2 1
    public static void main(String[] args) throws IOException{
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        System.out.print("Enter - ");
        int a = Integer.parseInt(br.readLine());
        for(int i=1;i<=a;i++){
            for(int j=1;j<=a;j++){
                System.out.print(a-j+1+" ");
            }
            System.out.print("\n");
        }
    }
}
