import java.util.Scanner;

public class SolutionByNirmal {
    /*
     * Problem- A positive number N is given to you and You need to check Whether a Number is Even or Odd.
     * Approach - Using bit manipulation
     * Time Complexity - O(1)
     *
     * */
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        System.out.print("Enter a no. : ");
        int n = sc.nextInt();
        if (isOdd(n))
            System.out.println("Odd");
        else
            System.out.println("Even");
        sc.close();
    }

    private static boolean isOdd(int n) {
        //the last bit of every odd no is 1
        return ((1 & n) > 0);
    }
}
