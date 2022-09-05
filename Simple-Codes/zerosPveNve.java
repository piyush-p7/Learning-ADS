import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;
public class zerosPveNve {
    
    public static void main(String[] args) throws IOException {
        int Zero = 0;
        int Pve = 0;
        int Nve = 0;    
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        System.out.print("How many numbers want to enter : ");
        int value = Integer.parseInt(br.readLine());
        for(int i=1;i<=value;i++){
            System.out.print("Enter the "+i+" Number : ");
            int num = Integer.parseInt(br.readLine());
            if(num==0){
                Zero++;
            }
            else if(num<0){
                Nve++;
            }
            else{
                Pve++;
            }
        }
        System.out.println("Positive number(s) : "+Pve+"\nNegative number(s) : "+Nve+"\nZero(s) : "+Zero);
    }
}
