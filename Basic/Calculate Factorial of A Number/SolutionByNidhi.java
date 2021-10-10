/*
    Program Description: Program to calculate factorial of a number 
 */

import java.util.Scanner;

public class Factorial {

    // factorial array is maintained to store the value of already calculated factorials
    private static long[] factorial;

    /*
        Method description: method to calculate factorial of a given integer
     */
    private static long computeFactorial(int num) {
        if (num == 0 || num == 1) {
            return 1;
        }
        // if factorial value is known
        if (factorial[num] != 0) {
            return factorial[num];
        }
        factorial[num] = num * computeFactorial(num - 1);
        return factorial[num];
    }

    public static void main(String[] args) {
        Scanner scan = new Scanner(System.in);
        System.out.print("N = ");
        int num = scan.nextInt();
        if (num < 0) {
            System.out.println("Invalid input");
            return;
        }
        factorial = new long[num + 1];
        factorial[0] = factorial[1] = 1;
        System.out.println("Output = " + computeFactorial(num));
    }
}
