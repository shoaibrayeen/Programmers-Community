/*
    Program Description: Program to calculate lcm of 2 numbers
 */
import java.util.Scanner;

public class LCM {
    private static long lcm(long a, long b){
         long gcd = gcd(a, b);
         a = a / gcd;
         return b * a;
    }
    private static long gcd(long a, long b){
        if(b == 0) {
            return a;
        }
        return gcd(b, a % b);
    }

    public static void main(String[] args) {
        Scanner scan = new Scanner(System.in);
        long a = scan.nextLong();
        long b = scan.nextLong();
        System.out.println("LCM = " + lcm(a, b));
    }
}
