import java.util.Scanner;

public class NextGreaterElement {

    public static void main(String[] args) {

        int i, n;
        Scanner sc = new Scanner(System.in);
        n = sc.nextInt();
        long a[] = new long[n];        //input array
        long op[] = new long[n];        //output array

        for (i = 0; i < n; i++) {
            a[i] = sc.nextLong();
        }

        sc.close();                    //input ends

        op = nextGreater(n, a, op);
        display(op);
    }


    private static long[] nextGreater(int n, long[] a, long[] op) {
        int i;
        for (i = 0; i < n; i++) {
            for (int j = i + 1; j < n; j++) {
                if (a[j] > a[i]) {
                    op[i] = a[j];
                    break;
                }
            }
            if (op[i] == 0) {
                op[i] = -1;
            }
        }
        return op;
    }


    private static void display(long[] op) {
        for (long element : op) {
            System.out.print(element + " ");
        }
    }

}
