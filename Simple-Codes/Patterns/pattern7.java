import java.util.Scanner;

public class pattern7 {
    // Output
    // Enter - 5
    // 1 2 3 4 5
    // 1 2 3 4
    // 1 2 3
    // 1 2 
    // 1 
    public static void main(String[] args) {
        Scanner sc =  new Scanner(System.in);
        System.out.print("Enter - ");
        int a = sc.nextInt();
        sc.close();
        // for(int i=a;i>=1;i--){
        //     for(int j=1;j<=i;j++){                    //BY ME
        //         System.out.print(j+ " ");
        //     }System.out.println();
        // }
        for(int i=1;i<=a;i++){
            for(int j=1; j<=a-i+1;j++){
                System.out.print(j+" ");                //BY Apna collage
            }
            System.out.println();
        }
    }
}
