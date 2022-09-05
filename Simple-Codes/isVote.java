import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;

public class isVote {
    public static void vote(int age){
        if (age>=18) {
            System.out.println("Person can vote");
        } else {
            System.out.println("Person cannot vote");
        }
    }
    public static void main(String[] args) throws IOException{
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        System.out.print("Enter age : ");
        try {
            int age = Integer.parseInt(br.readLine());
            vote(age);
        } catch (NumberFormatException e) {
            System.out.println("---Invalid age---");
        }
        finally{
            System.out.println("This is final");
        }
    }
}
