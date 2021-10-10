import java.util.Scanner;

class CheckIfOppositeSigns {
    private static String check(int a, int b) {
        if ((a ^ b) < 0)
            return "The two inputted numbers have opposite signs";

        else
            return "The two inputted numbers do not have opposite signs";
    }

    public static void main(String[] args) {
        Scanner s = new Scanner(System.in);
        System.out.println("Enter a ");
        int a = s.nextInt();
        System.out.println("Enter a ");
        int b = s.nextInt();
        System.out.println(check(a, b));
    }
}
