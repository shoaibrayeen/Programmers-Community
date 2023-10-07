import java.util.*;

public class hacktoberfest3 {

    public static void main(String args[]) {

        String x, y = "";

        Scanner kb = new Scanner(System.in);

        System.out.print("Enter a String to be reversed");

        x = kb.nextLine();

        int n = x.length();

        for (int i = n - 1; i >= 0; i--) {

            y = y + x.charAt(i);

        }
        System.out.println("The reversed String is:"+y);

        }

}
