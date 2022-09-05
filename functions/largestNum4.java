import java.util.*;

public class largestNum4 {
    public static String largeNum(int num){
        // int result=0;
        String result = Integer.toString(num);
        return result;
    }
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        System.out.print("Enter 4 digit number - ");
        int num = sc.nextInt();
        sc.close();
        String result = largeNum(num);
        System.out.println("Largest three digit number is "+result);
    }
}
