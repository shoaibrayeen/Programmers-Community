/*Description:
Take input "n1" and "n2" as the two numbers.
Print their GCD and if number is negative throws invalid Input.
 */

import java.util.Scanner;

public class SolutionByIndra {

    public static void main(String[] args) throws Exception {
        Scanner scn = new Scanner(System.in);
        System.out.println("Enter first number: ");
        int n1 = scn.nextInt();
        System.out.println("Enter Second number");
        int n2 = scn.nextInt();
        int ans = GCD(n1, n2);
        System.out.println("Gcd of " + n1 + " and " + n2 + " is : " + ans);
        scn.close();

    }

    public static int GCD(int n1, int n2) throws Exception {
        if (n1 < 0 || n2 < 0) {
            throw new Exception("Invalid input");
        }

        while (n1 % n2 != 0) {
            int rem = n1 % n2;
            n2 = n1;
            n2 = rem;
        }
        int gcd = n2;
        return gcd;

    }
}