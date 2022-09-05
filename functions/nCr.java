import java.util.*;
public class nCr {
    public static int loop(int a){
        int loopRes=1;
        for(int i=1;i<=a;i++){
            loopRes*=i;
        }
        return loopRes;
    }
    public static void main(String[] args) {
        // nCr = n!/r!(n-r)!
        Scanner sc = new Scanner(System.in);
        System.out.print("Enter (n)- ");
        int n = sc.nextInt();
        System.out.print("Enter (r)- ");
        int r = sc.nextInt();
        sc.close();
        int res=1;
        int nrf=1,nf=1,rf = 1;
        nf=loop(n);
        rf=loop(r);
        nrf = loop(n-r);
        res = nf/(rf*nrf);
        System.out.println("Answer - " + res);
    }
}
