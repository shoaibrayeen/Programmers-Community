import java.util.Scanner;

/*
    Program Description: This program checks whether a number is Even or Odd
 */
public class EvenOrOdd {
    private static void isEvenOrOdd(long num) {
        long check = 1 & num;
        if(check == 0) {
            System.out.println("Output = Even");
        }else{
            System.out.println("Output = Odd");
        }
    }

    public static void main(String[] args) {
        Scanner scan = new Scanner(System.in);
        int num = scan.nextInt();
        isEvenOrOdd(num);
    }
}
