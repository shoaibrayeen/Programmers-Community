import java.util.Scanner;

public class MissingElementInArray {
    public static void main(String[] args) {
        int n;
        Scanner sc = new Scanner(System.in);
        n = sc.nextInt();
        int a[] = new int[n];
        int i;
        for (i = 0; i < n; i++) {
            a[i] = sc.nextInt();
        }
        sc.close();
        int sum = ((n + 1) * (n + 2)) / 2;
        for (i = 0; i < n; i++) {
            sum -= a[i];
        }
        System.out.println(sum);
    }
}
