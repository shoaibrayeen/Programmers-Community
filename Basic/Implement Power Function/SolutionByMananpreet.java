/*
The following program calculates and returns the power of an entered base number using recursion
*/

import java.util.Scanner;

class Power {
    public static int power(int base, int power) {
        if (power == 0)
            return 1;

        if (power < 0)
            negpower(base, power);

        return (power(base, power - 1) * base);

    }

    public static String negpower(int base, int power) {
        power = Math.abs(power);
        int ans = power(base, power);
        return "1/" + ans;
    }

    public static void main(String[] args) {
        Scanner s = new Scanner(System.in);

        System.out.print("Enter the base number: ");
        int base = s.nextInt();

        System.out.print("Enter the exponent: ");
        int power = s.nextInt();
        if (power < 0)
            System.out.println("The solution to " + base + "^" + power + ": " + negpower(base, power));
        else
            System.out.println("The solution to " + base + "^" + power + ": " + power(base, power));


    }
}
