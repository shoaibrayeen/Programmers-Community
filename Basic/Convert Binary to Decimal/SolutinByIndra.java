package Basic;

import java.util.Scanner;
/*
Description.
1. You are given a number in binary Form.
2. You are required to convert the number n into its corresponding value in decimal number system.

Input Format
A number in binary Form.

Output Format
A decimal number representing corresponding value of n in base b.
 
Sample Input
111001
2
Sample Output
57
 */

public class SolutinByIndra {

    public static void main(String[] args) {

        Scanner scn = new Scanner(System.in);
        System.out.println("Enter a binary number which u want to covert in decinal : ");
        int bin = scn.nextInt();
        int ans = BinaryToDecimal(bin);
        System.out.println("Decimal no of " + bin + " is : " + ans);
        scn.close();

    }

    public static int BinaryToDecimal(int bin) {

        int dec = 0;

        int twopowers = 1;

        while (bin != 0) {
            int rem = bin % 10;
            dec = dec + rem * twopowers;
            twopowers = twopowers * 2;
            bin = bin / 10;
        }
        return dec;

    }
}