/*
    Program Description: Program to check whether a number is prime or not
    Time Complexity: O(sqrt(n))
 */

import java.util.Scanner;

public class PrimeOrNot {
    private static boolean isPrimeOrNot(long num) {
        if (num < 2) {
            return false;
        }
        if (num == 2) {
            return true;
        }
        for (int i = 2; i < Math.sqrt(num); i++) {
            if (num % i == 0) {
                return false;
            }
        }
        return true;
    }

    public static void main(String[] args) {
        Scanner scan = new Scanner(System.in);
        System.out.print("N = ");
        long num = scan.nextLong();
        System.out.println(num < 0 ? "Invalid Input" : (isPrimeOrNot(num) ? "Yes" : "No"));
    }
}
