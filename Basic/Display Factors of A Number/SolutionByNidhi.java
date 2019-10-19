/*
    Program Description: Program to print factors of a given number
 */
import java.util.Scanner;

public class FactorsOfNumber {
    private static void printFactors(int num) {
        for(int i = 1; i <= num/2; i++) {
            if(num % i == 0) {
                System.out.print(i + ", ");
            }
        }
        System.out.println(num);
    }

    public static void main(String[] args) {
        Scanner scan = new Scanner(System.in);
        System.out.print("N = ");
        int num = scan.nextInt();
        printFactors(num);
    }
}
