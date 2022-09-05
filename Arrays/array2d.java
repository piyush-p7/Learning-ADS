import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;

public class array2d {
    public static void main(String[] args) throws IOException{
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        int rows = Integer.parseInt(br.readLine());
        int col = Integer.parseInt(br.readLine());
        int array[][] = new int[rows][col];
        for(int i=0;i<rows;i++){
            for(int j=0;j<col;j++){
                array[i][j]=Integer.parseInt(br.readLine());
            }
        }
        for(int i=0;i<rows;i++){
            for(int j=0;j<col;j++){
                System.out.print(array[i][j] + " ");    
            }System.out.println();
        }


    }
}
