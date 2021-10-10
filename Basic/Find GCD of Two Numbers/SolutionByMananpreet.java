import java.util.Scanner;

class GCD {
    public static int gcd(int a, int b) {

        int gcd = 1;
        int i = 1;
        int min = 0;

        if (a < b)
            min = a;
        else
            min = b;

        while (i <= min) {
            if (a % i == 0 && b % i == 0)
                gcd = i;
            i++;
        }
        return gcd;

    }

    public static void main(String[] args) {
        Scanner s = new Scanner(System.in);

        System.out.print("Enter number 1: ");
        int n = s.nextInt();

        System.out.print("Enter number 2: ");
        int m = s.nextInt();

        System.out.println("Output: " + gcd(n, m));
    }
}
