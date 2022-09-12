import java.io.*;
public class array2dSearch {
    public static void main(String[] args) throws IOException{
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        int row = Integer.parseInt(br.readLine());
        int col = Integer.parseInt(br.readLine());
        int array[][] = new int[row][col];
        for(int i=0;i<row;i++){
            for(int j=0;j<col;j++){
                System.out.print("Next - ");
                array[i][j]=Integer.parseInt(br.readLine());
            }
        }
        System.out.print("number to be searched - ");
        int number = Integer.parseInt(br.readLine());
        for(int i = 0;i<row;i++){
            for(int j=0;j<col;j++){
                if (array[i][j] == number) {
                    System.out.println(number+" found at ("+i+", "+j+")");
                    // return;
                }
            }
        }
    }
}
