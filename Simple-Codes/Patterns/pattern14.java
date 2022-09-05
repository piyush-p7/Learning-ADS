import java.util.Scanner;
public class pattern14 {
  // OUTPUT
  // enter - 5 
  //        1                (Palindrome)
  //      2 1 2
  //    3 2 1 2 3
  //  4 3 2 1 2 3 4
  //5 4 3 2 1 2 3 4 5
    public static void main(String[] args) {
    Scanner sc = new Scanner(System.in);
    System.out.print("Enter - ");
    int a = sc.nextInt();
    sc.close();

    for(int i=1;i<=a;i++){
        for(int j=1;j<=a-i;j++){
            System.out.print("  ");

        }
        for(int j=i;j>=1;j--){
            System.out.print(j+" ");
        }
        for(int j=2;j<=i;j++){
            System.out.print(j+ " ");
        }
        System.out.println();
    }
    }
}
