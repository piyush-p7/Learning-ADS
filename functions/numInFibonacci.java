import java.util.*;
public class numInFibonacci {
    public static boolean checkNum(int num){
        int a = 0;
        int b = 1;
        int c = 0;
        System.out.println("Fibonacci series in search of "+num+" is below:-");
        for(int i=0;i<=num;i++){
            System.out.print(c+"\n");
            c = a+b;
            a = b;
            b = c;
            if(c==num ||num == 1){
                System.out.print(c+"\n");
                return true;
            }
            else if(c>num) {
                System.out.print(c+"\n");
                return false;
            }
        }
        return false;
    }
    public static void main(String[] args) {
        Scanner sc =new Scanner(System.in);
        int i = sc.nextInt();
        boolean fibo =  checkNum(i);
        if(fibo == true){
            System.out.println(i+" is in Fibonacci Series.");
        }
        else{
            System.out.println(i+" is not in Fibonacci Series.");
        }
        sc.close(); 
    }
    
}
