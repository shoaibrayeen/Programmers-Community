import java.util.Scanner;

class NumberOfDigits {
    public static int count(int n) {
        if (n == 0)             //Number of digits in the numeral 0 is 1.
            return 1;

        int count = 0;
        int num = n;
        if (n < 0) {
            num = n - 2 * n;
        }


        while (num > 0) {
            num = num / 10;
            count++;
        }
        return count;
    }

    public static void main(String[] args) {
        Scanner s = new Scanner(System.in);
        System.out.println("Enter a number");
        int n = s.nextInt();
        System.out.println("The number of digits in " + n + " are : " + count(n));
    }
}
