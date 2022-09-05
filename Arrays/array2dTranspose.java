import java.util.*;
public class array2dTranspose{
    public static void main(String[] args){
        Scanner sc = new Scanner(System.in);
        //row
        int n = sc.nextInt();
        //coloumn
        int m = sc.nextInt();
        //making array named as matrix[row][coloumn]
      int matrix[][] = new int[n][m];
      for(int i=0; i<n; i++) {
           for(int j=0; j<m; j++) {
               //initializing the value in the array
               matrix[i][j] = sc.nextInt();
           }
      }
      sc.close();
 
      System.out.println("The transpose is : ");
      //To print transpose
      for(int j=0; j<m ;j++) {
          for(int i=0; i<n; i++) {
              System.out.print(matrix[i][j]+" ");
          }
          System.out.println();
      }
   }
}
// Output -
// 2
// 2
// 1 2
// 3 4
// The transpose is : 
// 1 3
// 2 4
