/*
  Program Description: Program to convert a binary number to decimal
*/

import java.util.Scanner;

public class BinaryToDecimal {
    private static long convertBinaryToDecimal(String binary) {
        long decimalValue = 0;
        int k = 0;
        for (int i = binary.length() - 1; i >= 0; i--) {
            if (binary.charAt(i) == '1') {
                decimalValue += Math.pow(2, k);
            }
            k++;
        }
        return decimalValue;
    }

    public static void main(String[] args) {
        Scanner scan = new Scanner(System.in);
        String binaryNumber = scan.next();
        if (binaryNumber.matches("[01]+")) {
            System.out.println(convertBinaryToDecimal(binaryNumber));
        } else {
            System.out.println("Invalid Input");
        }
    }
}
