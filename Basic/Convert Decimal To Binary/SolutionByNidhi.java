/*
    Program Description: Program to convert decimal to binary format
 */
import java.util.Scanner;

public class DecimalToBinary {
    private static String convertDecimalToBinary(long decimalNumber){
        if(decimalNumber == 0) {
            return "0";
        }
        StringBuilder binaryNumber = new StringBuilder("");
        while(decimalNumber != 0) {
            binaryNumber.append(decimalNumber % 2);
            decimalNumber /= 2;
        }
        return binaryNumber.reverse().toString();
    }
    public static void main(String[] args) {
        Scanner scan = new Scanner(System.in);
        long decimalNumber = scan.nextLong();
        System.out.println(convertDecimalToBinary(decimalNumber));
    }
}
