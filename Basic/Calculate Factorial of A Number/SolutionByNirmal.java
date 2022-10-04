import java.util.Scanner;

public class SolutionByNirmal {

    /*
     * Problem- A positive number N is given to you and You need to calculate its factorial.
     * Approach- Recursion
     */

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        System.out.print("Enter a no. :");
        int n = sc.nextInt();

        if (n < 0)
            System.out.println("Factorial is defined fro positive nos. only");
        else
            System.out.println("Factorial is : " + factorial(n));

        sc.close();
    }


    private static int factorial(int n) {
        if (n == 0)
            return 1;
        return n * factorial(n - 1);
    }
}
