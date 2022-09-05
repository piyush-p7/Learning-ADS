import java.io.*;
public class arrayMinMax {
    //Entering the numbers in arary (int Primitive DataType) then finding largest and smallest number.
    public static void main(String[] args)throws IOException {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        System.out.print("Enter size : ");
        int size = Integer.parseInt(br.readLine());
        int array[]= new int[size];
        for(int i=0;i<array.length;i++){
            System.out.print("\nEnter "+(i+1)+" : ");
            array[i]=Integer.parseInt(br.readLine());
        }
        // Java has constants to represent these numbers, so that these can be directly assigned to the variable 
        // without actually typing the whole number.

        // Integer.MAX_VALUE = 2^31-1 =  2147483647
        // Integer.MIN_VALUE = -2^31  = -2147483648

//Here concept of Integer.MAX_VALUE & Integer.MIN_VALUE is used in the way if the number is greater/lesser 
//than the Integer.MIN_VALUE/Integer.MAX_VALUE respectively then assign that number to [max & min respectively(variables)]
        int max = Integer.MIN_VALUE;
        int min = Integer.MAX_VALUE;
        for(int i=0;i<array.length;i++){
            if(array[i]>max){
                max=array[i];
            }
            if(array[i]<min){
                min=array[i];
            }
        }
        System.out.println("Minimum number : "+min +"\nMaximum number : "+ max);
    }
    
}
