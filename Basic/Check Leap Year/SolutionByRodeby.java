import java.util.Scanner;

public class isLeapYear {

    public static void main(String[] args) {
        // TODO Auto-generated method stub

        Scanner input = new Scanner(System.in);
        int year = input.nextInt();

        boolean leapYear = true;
        System.out.println(isLeapYear(year) ? "Yes" : "No");
    }

    public static boolean isLeapYear(int year) {
        boolean isLeapYear = false;
        if (year % 400 == 0)
            isLeapYear = true;
        else if (year % 100 == 0)
            isLeapYear = false;
        else if (year % 4 == 0)
            isLeapYear = true;
        else
            isLeapYear = false;
        return isLeapYear;
    }

}
