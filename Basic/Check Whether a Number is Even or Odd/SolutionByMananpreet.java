import java.util.Scanner;

class CheckEven {
    public static String checkIfEven(int n) {
        if (n == 0)
            return "Neither even nor odd";

        boolean checker = true;

        while (n > 0) {
            if (checker == true) {
                checker = false;
                n--;
            } else {
                checker = true;
                n--;
            }
        }

        if (checker == true)
            return "Even";

        return "Odd";
    }

    public static void main(String[] args) {
        Scanner s = new Scanner(System.in);
        System.out.println("Enter a number n");
        int n = s.nextInt();
        System.out.println(n + " : " + checkIfEven(n));
    }
}
