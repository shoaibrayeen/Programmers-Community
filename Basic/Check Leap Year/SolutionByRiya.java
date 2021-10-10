import java.util.Scanner;

class LeapYear {
    private static String check(int year) {
        if (year % 400 == 0) {
            return "Is a leap year";
        }

        if (year % 100 == 0) {
            return "It is not a leap year";
        }

        if (year % 4 == 0) {
            return "It is a leap year";
        }

        return "Is not a leap year";
    }

    public static void main(String[] args) {
        Scanner s = new Scanner(System.in);

        System.out.print("Enter the year :");
        int n = s.nextInt();

        System.out.print(check(n));
    }
}
