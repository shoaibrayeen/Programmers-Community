import java.util.Scanner;

public class SortArrayOf3Nos {

    public static void main(String[] args) {
        int i, n;
        Scanner sc = new Scanner(System.in);
        n = sc.nextInt();
        int a[] = new int[n];

        for (i = 0; i < n; i++) {
            a[i] = sc.nextInt();
        }
        sc.close();                        //input ends

        int[] op = countSort(a);
        disp(op);
    }


    private static int[] countSort(int[] a) {
        int i;
        int count[] = new int[3];        //count array stores the count of occurrences

        int op[] = new int[a.length];    //output array

        for (i = 0; i < count.length; i++) {    //initialize to 0
            count[i] = 0;
        }

        for (i = 0; i < a.length; i++) {        //count no of elements
            ++count[a[i]];
        }

        for (i = 1; i < count.length; i++) {
            count[i] += count[i - 1];        //adding them to the previous values
        }

        for (i = a.length - 1; i >= 0; i--) {
            op[count[a[i]] - 1] = a[i];    //placing them to the correct index
            --count[a[i]];
        }
        return op;
    }


    private static void disp(int[] op) {
        for (int j : op) {
            System.out.print(j + " ");
        }
    }
}
