import java.io.*;
public class prime {
    public static void main(String[] args) throws IOException{
        BufferedReader sc = new BufferedReader(new InputStreamReader(System.in));
        System.out.print("Enter - ");
        int a = Integer.parseInt(sc.readLine());
        for(int i=2;i<=a;i++){
            boolean isPrime = true;
            for(int j=2;j<i;j++){
                if(i%j==0){
                    isPrime = false;
                    break;
                }
            }
            if(isPrime==true){
                System.out.print(i+" ");
            }
        }
    }
}
