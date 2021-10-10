/*
    Program Description: Program to calculate nth fibonacci number
    Approach: Store the previously calculated fibonacci numbers in a separate array and access it to calculte the value of new fibonacci numbers 
 */

import java.util.Scanner;

public class Fibonacci {
    private static int[] fibonacci;                     // fibonacci array to store already calculated fibonacci numbers

    private static int calculateFib(int n) {
        if (n == 1) {
            return 0;
        }
        if (n == 2) {
            return 1;
        }
        if (fibonacci[n] != 0) {
            return fibonacci[n];
        }
        return fibonacci[n] = calculateFib(n - 1) + calculateFib(n - 2);
    }

    public static void main(String[] args) {
        Scanner scan = new Scanner(System.in);
        System.out.print("N = ");
        int num = scan.nextInt();
        if (num <= 0) {
            System.out.println("Invalid input");
            return;
        }
        fibonacci = new int[num + 1];
        System.out.println("Output = " + calculateFib(num));
    }
}
