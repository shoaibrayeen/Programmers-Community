import java.util.Scanner;

class SumOfDigits {
    private static int sum(int n) {
        int sum = 0;
        while (n > 0) {
            sum = sum + (n % 10);
            n = n / 10;
        }
        return sum;
    }

    public static void main(String[] args) {
        Scanner s = new Scanner(System.in);

        System.out.println("Enter a number :");

        int n = s.nextInt();

        System.out.print("The product of the digits of the entered number is: " + sum(n));
    }
}
