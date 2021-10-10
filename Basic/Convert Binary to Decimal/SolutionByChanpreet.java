import java.util.Scanner;

public class BinaryToDecimal {
    /*
     * Problem - Write a program to convert a binary number into a decimal number.
     * Approach- Use normal bit manipulation to get power of 2 and add it
     *
     * */

    public static long toDecimal(long binary) {

        long rem, count = 0, sum = 0;

        while (binary > 0) {
            //get the last digit of binary sequence
            rem = binary % 10;
            //multiply with a power of 2
            rem = rem << count;
            count++;
            sum = sum + rem;
            binary /= 10;
        }
        return sum;
    }


    public static void main(String[] args) {

        Scanner sc = new Scanner(System.in);
        System.out.print("Enter a binary no. :");
        String binary_str = sc.nextLine();
        //Parse to long
        long binary = Long.parseLong(binary_str);

        System.out.println(toDecimal(binary));
        sc.close();
    }
}
