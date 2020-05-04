import java.util.Scanner;

public class EvenOdd {
    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);
        System.out.println("Enter a number");
        int n = in.nextInt();
        System.out.println(isEven(n));
    }


    public static String isEven(int n) {
        if (n % 2 == 0)
            return "The number is even";
        else
            return "The number is odd";
    }
}





