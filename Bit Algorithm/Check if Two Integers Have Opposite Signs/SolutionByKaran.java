import java.io.*;
import java.util.*;

class Ideone {
    static void opp_sign(int a, int b) {
        if ((a > 0 && b > 0) || (a < 0 && b < 0)) {
            System.out.println("No");
        } else {
            System.out.println("Yes");
        }
    }

    public static void main(String[] args) throws java.lang.Exception {
        int x, y;
        System.out.println("Enter two numbers: ");
        Scanner sc = new Scanner(System.in);
        x = sc.nextInt();
        y = sc.nextInt();
        opp_sign(x, y);
    }
}
