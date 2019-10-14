/* 
    Program Description: Program to calculate gcd of two numbers
 */
import java.util.Scanner;

public class GCD {
    private static long calculateGCD(long a, long b) {
        if(b == 0) {
            return a;
        }
        return calculateGCD(b, a % b);
    }

    public static void main(String[] args) {
        Scanner scan = new Scanner(System.in);
        long a = scan.nextLong();
        long b = scan.nextLong();
        long gcd = calculateGCD(a,b);
        System.out.println(a <= 0 || b <= 0? "Invalid Input" : "Output = " + gcd);
    }
}
