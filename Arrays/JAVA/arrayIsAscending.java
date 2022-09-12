import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;

public class arrayIsAscending {
    public static void check(int array[]){
//kyuki humh for loop main [i+1] chahiye to phle hi value length ki 1 less rkhenge jisse [i+1] value compare kr ske      
        int size = array.length-1;
        boolean isAscending = true;
        for(int i=0; i<size; i++) {
            if(array[i] > array[i+1]) { 
                // This is the condition for comaparing the indexed value and the next value
                isAscending = false;
            }
        }
        if(isAscending) {
            System.out.println("The array is sorted in ascending order");
        } else {
            System.out.println("The array is not sorted in ascending order");
        }
    }
    public static void main(String[] args)throws IOException {
    BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
    System.out.print("Enter size : ");
    int size = Integer.parseInt(br.readLine());
    int array[]= new int[size];
    for(int i=0;i<array.length;i++){
        System.out.print("Enter the "+(i+1)+" element : ");
        array[i]=Integer.parseInt(br.readLine());
    }
    check(array);
    System.out.print("Your Array is : ");
    for(int i=0;i<array.length;i++){
        System.out.print(array[i]+" ");
    }
    }
}
