import java.util.*;

public class solbyshivank {

    public static void main(String args[]) {

        String a, b = "";

        Scanner s = new Scanner(System.in);

        System.out.print("Enter the string you want to check:");

        a = s.nextLine();

        int n = a.length();

        for (int i = n - 1; i >= 0; i--) {

            b = b + a.charAt(i);

        }

        if (a.equalsIgnoreCase(b)) {

            System.out.println("The string is palindrome.");

        } else {

            System.out.println("The string is not palindrome.");

        }

    }

}
