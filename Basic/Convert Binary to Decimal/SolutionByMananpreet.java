/*
The following java program converts the entered binary number into a decimal number.
*/

import java.util.Scanner;

class BinaryToDecimal {
    public static int binaryToDecimal(int n) {
        int num = n;
        int base = 1;// 2^0=1
        int decimal = 0;
        int temp = 0;

        while (num > 0) {
            temp = num % 10;
            num = num / 10;
            decimal = decimal + temp * base;
            base *= 2;
        }
        return decimal;
    }

    public static void main(String[] args) {
        Scanner s = new Scanner(System.in);
        System.out.print("Enter a binary number: ");
        int binary = s.nextInt();
        System.out.println("The decimal conversion of the inputed binary number " + binary + " : " + binaryToDecimal(binary));
    }
}
