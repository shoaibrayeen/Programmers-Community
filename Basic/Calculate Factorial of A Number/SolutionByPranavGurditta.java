import java.util.*;

class Factorial {
    public static void main() {
        Scanner sc = new Scanner(System.in);
        System.out.println("Enter a positive number whose factorial has be calculated.");
        int n = sc.nextInt();
        if (n < 0) {
            System.out.println("Enter a positive number.");
            n = sc.nextInt();
        }
        Factorial obj = new Factorial();
        System.out.println("Factorial of " + n + " is " + obj.factorial(n));
    }

    public int factorial(int n) {
        int ans = 1;
        for (int i = 1; i <= n; i++)
            ans = ans * i;
        return ans;
    }

}
