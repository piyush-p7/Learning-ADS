import java.io.*;
public class pattern20 {
    // Enter - 4
    // 1 
    // 2 3
    // 4 5 6
    // 7 8 9 10
    public static void main(String[] args)throws IOException {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        System.out.print("Enter - ");
        int a = Integer.parseInt(br.readLine());
        int p = 1;
        for(int i=1;i<=a;i++){
        for(int ij=1;ij<=i;ij++){
                System.out.print(p+" ");
                p++;
            }
            System.out.println();
        }
    }
}
