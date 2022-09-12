import java.io.*;
// Entering the names(String Non - Primitive DataType) in the array(Non-Primitive DataType) and then printing them in the
// same order.
public class arrayNames {
    public static void main(String[] args) throws IOException{
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        System.out.print("Number of names to enter : ");
        int size = Integer.parseInt(br.readLine());
        String names[] = new String[size];
        System.out.print("Number of names will be entered - ");
        System.out.println(names.length);
        for(int i=0;i<names.length;i++){
            System.out.println("Enter Name : ");
            //here reading the whole line as a string then saving them into desired arary index ie (i)
            names[i]=br.readLine();
        }
        System.out.print("Names entered : ");
        for(int i=0;i<names.length;i++){
            //printing the names from the array indexwise. 
            System.out.print(names[i]+", ");
        }
    }
}
