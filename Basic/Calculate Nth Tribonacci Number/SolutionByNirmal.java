import java.io.*;
import java.util.*;

public class SolutionByNirmal {

    public static void main(String[] args) {
        Scanner scan = new Scanner(System.in);
        int N = scan.nextInt();
        System.out.println(tri(N));
    }

    private static int tri(int N) {
        if (N <= 2) {
            return 0;
        }
        if (N == 3) {
            return 1;
        }
        return tri(N - 1) + tri(N - 2) + tri(N - 3);
    }
}
