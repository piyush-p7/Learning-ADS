import java.io.*;
public class pattern21 {
    // Enter - 4
    // 1 
    // 2 3 
    // 3 4 5 
    // 4 5 6 7 
    public static void main(String[] args)throws IOException {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        System.out.print("Enter - ");
        int a = Integer.parseInt(br.readLine());
        for(int i=1;i<=a;i++){
            int p = i;
            for(int ij=1;ij<=i;ij++){
                System.out.print(p+" ");
                p++;
            }
            System.out.println();
        }
    }
}
