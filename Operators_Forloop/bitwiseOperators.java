public class bitwiseOperators{
    public static void main(String[] args) {
        int a = 10;
        int b = 2;
        System.out.println("OR - "+ (a|b));
        System.out.println("AND - "+ (a&b));
        System.out.println("XOR - "+ (a^b));
        System.out.println("NOT of b - "+ (~b));
        System.out.println("NOT of a - "+ (~a));
        System.out.println("bitwise left shift - "+ (a << 1));
        // shifting bits of number to left and placing 0 at the vacant which is at the last.
        // [Here value 1 means we are shifting bits by 1 block]
        System.out.println("bitwise right shift - "+ (a >> 1));
        // shifting bits of number to right and placing (SIGN-VALUE) at the vacant which is at the front.
        // [Here value 1 means we are shifting bits by 1 block]
    }
}