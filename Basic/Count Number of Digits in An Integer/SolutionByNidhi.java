/*
    Program Description: Program to count no. of digits in a given number
 */

import java.util.Scanner;

public class CountDigits {
    private static long countDigits(String number) {
        return number.length();
    }

    public static void main(String[] args) {
        Scanner scan = new Scanner(System.in);
        String number = scan.next();
        try {
            Long.parseLong(number);
        } catch (Exception e) {
            System.out.println("Invalid Input");
            return;
        }
        System.out.println("Output = " + countDigits(number));
    }
}
