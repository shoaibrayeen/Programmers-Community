import java.util.Scanner;

public class SolutionByShubham {

    static Scanner scan = new Scanner(System.in);

    static int reverse(int number) {
        int rev = 0;

        while (number > 0) {
            rev = rev * 10 + number % 10;
            number = number / 10;
        }

        return rev;
    }

    public static void main(String[] args) {
        System.out.println("Enter a number to reverse: ");
        int number = scan.nextInt();

        System.out.println("Reverse of the number is: " + reverse(number));
    }
}