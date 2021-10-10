/* Program to find factorial of a number using recursive function.
 Time complexity: O(n)
 Space complexity: O(n)
 */

import java.util.*;

public class SolutionBySukriti {
    public static int factorialByRecursion(int n) {
        if (n == 0 || n == 1)
            return 1;
        else
            return n * factorialByRecursion(n - 1);
    }

    public static void main(String[] args) {
        Scanner s = new Scanner(System.in);
        System.out.println("Input number: ");
        int input = s.nextInt();
        System.out.println("The factorial of " + input + " is " + factorialByRecursion(input));
    }
}
