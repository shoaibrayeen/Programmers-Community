import java.util.Scanner;

public class factorial {
    public static void main(String[] args) {
        Scanner input = new Scanner(System.in);
        int number = input.nextInt();
        System.out.println("Output = " + returnFactorial(number));
    }

    public static int returnFactorial(int n) {
        int factorial = 1;
        for (int i = 1; i <= n; i++) {
            factorial *= i;
        }
        return factorial;
    }

}
