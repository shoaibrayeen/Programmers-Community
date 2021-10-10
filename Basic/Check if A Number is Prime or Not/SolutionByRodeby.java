import java.util.Scanner;

public class Prime {

    public static void main(String[] args) {

        Scanner input = new Scanner(System.in);
        int numberToBeChecked = input.nextInt();

        System.out.println(isPrime(numberToBeChecked) ? "Yes" : "No");
    }

    public static boolean isPrime(int number) {
        boolean isPrime = true;
        for (int i = 2; i < number; i++) {
            if (number % i == 0) {
                isPrime = false;
            }
        }
        return isPrime;
    }
}
