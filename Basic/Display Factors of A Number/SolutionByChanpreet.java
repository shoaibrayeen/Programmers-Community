import java.util.Scanner;

public class FactorsOfANo {

    /*
     * Problem - A positive number N is given to you and You need to prints all the factor of the number.
     * */

    private static void factors(int n) {
        if (n == 0) {
            //reference quora https://www.quora.com/Does-0-have-an-infinite-number-of-factors
            System.out.println("All nos. other than 0 are factors of 0");
            return;
        }

        System.out.print("Factors of " + n + " are : ");
        for (int i = 1; i <= n / 2; i++) {
            if (n % i == 0)
                System.out.print(i + ", ");
        }
        System.out.println(n);
    }


    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        System.out.print("Enter a no. : ");
        int n = sc.nextInt();
        factors(n);
        sc.close();
    }

}
