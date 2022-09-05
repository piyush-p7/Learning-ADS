import java.io.*;
public class fibonacciSeries {
  public static void main(String[] args) throws IOException{
    BufferedReader br =new BufferedReader(new InputStreamReader(System.in));
    System.out.print("Enter : ");
    double n = Integer.parseInt(br.readLine());
    double firstTerm = 0, secondTerm = 1;
    System.out.println("Fibonacci Series till " + n + " terms:");
    for (int i = 1; i <= n; i++) {
      System.out.print(firstTerm + ", ");
      // compute the next term
      double nextTerm = firstTerm + secondTerm;
      firstTerm = secondTerm;
      secondTerm = nextTerm;
    }
  }
}