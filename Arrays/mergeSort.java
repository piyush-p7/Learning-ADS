import java.util.*;

public class mergeSort{
    void merge(int arr[],int first,int mid,int last){
        // initializing two numbers for creating two half arrays.
        int n1 = mid - first + 1; 
        int n2 = last - mid;
        // initializing two sub-arrays of main array.
        int Left[] = new int[n1];
        int Right[] = new int[n2];
        // Initializing values to the sub arrays. 
        for (int i = 0; i < n1; ++i)
            Left[i] = arr[first + i];
        for (int j = 0; j < n2; ++j)
            Right[j] = arr[mid + 1 + j];
        // Initial index of merged subarray array
        int i = 0, j = 0;
        int k = first;
        while (i < n1 && j < n2) {
            if (Left[i] <= Right[j]) {
                arr[k] = Left[i];
                i++;
            }
            else {
                arr[k] = Right[j];
                j++;
            }
            k++;
        }
 
        /* Copy remaining elements of L[] if any */
        while (i < n1) {
            arr[k] = Left[i];
            i++;
            k++;
        }
 
        /* Copy remaining elements of R[] if any */
        while (j < n2) {
            arr[k] = Right[j];
            j++;
            k++;
        } 
    }


    void sort(int arr[],int first,int last){
        if(first<last){
            int mid = first+ (last-first)/2;

            sort(arr,first,mid);
            sort(arr,mid+1,last);

            merge(arr,first,mid,last);
        }
    }

    
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        System.out.print("Enter size - ");
        int size = sc.nextInt();
        int arr[] =  new int [size];
        for(int i=0;i<arr.length;i++){
            System.out.print("Enter number "+(i+1)+" - ");
            //here reading the whole line as a string then saving them into desired arary index ie (i)
            arr[i]=sc.nextInt();
        }
        System.out.println("Unsorted Array - ");
        for(int i=0;i<arr.length;i++){
            System.out.print(arr[i]+" ");
        }
        System.out.println();
        sc.close();
        mergeSort ob = new mergeSort();
        ob.sort(arr,0,arr.length-1);
        System.out.println("Sorted Array - ");
        for(int i=0;i<arr.length;i++){
            System.out.print(arr[i]+" ");
        }
    }
}