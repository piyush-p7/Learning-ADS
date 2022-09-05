import java.io.IOException;

public class infiniteDoWhile {
    public static void main(String[] args) throws IOException{
        int a = 0;
        do {
            a--;
            System.out.println(a);
        } while (a<1);
    }
}
